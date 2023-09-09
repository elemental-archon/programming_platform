#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkfibbo(int);

bool checkfibbo(int n)
{
    int a=0;
    int b=1;
    int c=a+b;
    if(a==n||b==n)
    return true;

    while(c<=n)
    {
        if(c==n)
        {return true;}
        a=b;
        b=c;
        c=a+b;
    }
    return false;
}

int main(void)
{
    int n;
    printf("Enter the number to check if it is fibbonacci or not ");
    scanf("%d", &n);

    bool check = checkfibbo(n);

    if(check==true)
    {
        printf("\nThe number is fibbonacci.");
    }
    else
    {
        printf("\nThe number is not fibbonacci.");
    }

    return 0;
}
