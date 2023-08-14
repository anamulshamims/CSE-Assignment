#include <stdio.h>
#include <conio.h>
int main()
{

    int i;

    for (i = 1; i <= 7; i++)
    {

        printf("\nfactorial of %d is = %d ", i, factorial(i));
    }
    return 0;
}

int factorial(int num)
{
    int j, fact = 1;
    for (j = 1; j <= num; j++)
    {
        fact *= j;
    }
    return fact;
}
