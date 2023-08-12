//Write a C program that calculates the HCF and LCM of two numbers.
#include <stdio.h>
#include <ctype.h>

int main() {
    int num1 , num2 , i ,gcd ,lcm ;
    printf("Enter two positive integer : ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        for(i=1;i<=num1;i++){
            if((num1%i==0) && (num2%i==0)){
                gcd = i;
            }
        }
    }
    else if(num1<num2){
          for(i=1;i<=num2;i++){
            if((num1%i==0) && (num2%i==0)){
                gcd = i;
            }
        }
    }
    else{
        gcd = num1;
    }
    lcm = (num1 * num2) / gcd ;
    printf("GCD = %d\nLCM = %d",gcd,lcm);

    return 0;
}
