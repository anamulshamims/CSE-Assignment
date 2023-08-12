/*Write a function to compute the factorial of a number, and use it to print the
factorials of the numbers 1-7.*/
#include<stdio.h>
#include<conio.h>
int main(){

    int i;


    for(i=1;i<=7;i++){

        printf("\nfactorial of %d is = %d ",i,factorial(i));
    }
    return 0;
}

int factorial(int num){
    int j,fact=1;
    for(j=1;j<=num;j++){
        fact *= j;
    }
    return fact;

}

