//Write logical expressions that tests whether a given character variable c is
//lower case letter
//upper case letter
//digit
// white space (includes space, tab, new line)
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isupper(c)) {
        printf("The character is an uppercase letter.\n");
    } else if (islower(c)) {
        printf("The character is a lowercase letter.\n");
    } else if (isdigit(c)) {
        printf("The character is a digit.\n");
    } else if (isspace(c)) {
        printf("The character is a white space character.\n");
    } else {
        printf("The character is not uppercase, lowercase, digit, or white space.\n");
    }

    return 0;
}
