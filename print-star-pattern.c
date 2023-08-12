#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    i=0;

    while(i<n){
            j=0;
            while(j<i){
            printf(" ");
            j++;
        }
        j=0;
        while(j<n-i){
            printf("*");
            j++;
        }


        printf("\n");


        i++;
    }
    return 0;
}

