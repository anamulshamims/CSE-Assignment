/*Write a C program to find the reverse of an integer number.*/
#include <stdio.h>
int main() {
    int num, reversedNum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    printf("Reverse of the number: %d\n", reversedNum);

    return 0;
}

