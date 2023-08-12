/*
Write a C program to display and find the sum of the series 1+11+111+....111 up to n.
For e.g., if n=4, the series is: 1+11+111+1111. Take the value of 'n' as input from the user.


#include<stdio.h>
int main(){
    int n,i,sum = 0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while(i<=n){
        printf("");
        sum += pow();
        i++

    }
}
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int term = 1;
    int sum = 0;

    printf("Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d", term);
        sum += term;
        if (i != n - 1) {
            printf(" + ");
        }
        term = term * 10 + 1;
    }

    printf("\nSum of the series: %d\n", sum);

    return 0;
}
