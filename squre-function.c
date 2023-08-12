/*Write a square() function and use it to print the squares of the numbers 1-10:*/
#include<stdio.h>
#include<conio.h>
int main(){

    int sq,i;

    for(i=1;i<=10;i++){
        sq = square(i);
        printf("\nSquare of %d is = %d ",i,sq);
    }
    return 0;
}
int square(int num){
    return num*num;
}
