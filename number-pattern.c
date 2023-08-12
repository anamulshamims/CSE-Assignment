/*Write a C program to print the following pattern:

a)
1
1 2
1 2 3

*/
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    i=1;

    while(i<=n){

        j=1;
        while(j<=i){
            printf("%d ",i);
            j++;
        }


        printf("\n");


        i++;
    }
    return 0;
}


