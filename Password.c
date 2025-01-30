#include <stdio.h>
#include <string.h>
void createStrongPassword(char word[], char password[]) {
    int length = strlen(word);
    password[0] = toupper(word[0]);
    for (int i = 1; i < length; i++) {
        if (word[i] == 's' || word[i] == 'S') {
            strcat(password, "$");
        } else if (word[i] == 'i' || word[i] == 'I') {
            strcat(password, "!");
        } else if (word[i] == 'o' || word[i] == 'O') {
            strcat(password, "()");
        } else {
            char str[2] = {word[i], '\0'};
            strcat(password, str);
        }
    }
    strcat(password, ".");
}
int main() {
    char word[100], password[300] = "";
    scanf("%s", word);

    createStrongPassword(word, password);
    printf("%s\n", password);

    return 0;
}
