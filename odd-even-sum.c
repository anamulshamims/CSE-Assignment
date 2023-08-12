/*Write a C program to input n numbers in an array, calculate the sum of all
even numbers and all odd numbers in the array and print the larger sum.*/
#include<stdio.h>
int main(){
    int evenSum , oddSum,n,i,max;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int num[n];
    evenSum = 0;
    oddSum = 0;
    i=0;
    while(i<n){
        printf("\nEnter number %d : ",i+1);
        scanf("%d",&num[i]);
        if(num[i]%2==0){
            evenSum +=num[i];
        }
        else{
            oddSum +=num[i];
        }



        i++;
    }

    if(evenSum>oddSum){
    max = evenSum;
    }
    else{
    max = oddSum;
    }
    printf("\nodd sum is : %d ",oddSum);
    printf("\neven sum is : %d ",evenSum);
    printf("\nlarger sum is : %d ",max);



    return 0;
}
