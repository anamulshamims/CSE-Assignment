/*Write a C program to print the following pattern:


b)
1
2 2
3 3 3
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
            printf("%d ",j);
            j++;
        }


        printf("\n");


        i++;
    }
    return 0;
}

