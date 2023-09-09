#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void binary_convert(int*, int);

void binary_convert(int *arr, int divident)
{
    int remiander;
    if(divident==0)
      return;
    remiander=divident%2;
    *arr = remiander;
    divident = divident/2;
    binary_convert(arr+1, divident);
    return;
}

int count_flag(int divident)
{
    if(divident==0)
      return 0;
    divident = divident/2;
    return 1+count_flag(divident);
}

int main(void)
{
    int *arr = NULL;
    int decimal;

    printf("Enter the integer decimal number to convert into decimal=");
    scanf("%d", &decimal);
    int length = count_flag(decimal);
    arr = (int*)calloc(length,sizeof(int));
    binary_convert(arr,decimal);
    for(int i=length-1;i>=0;i--)
    {
        printf("%d\t", *(arr+i));
    }
    free(arr);
    return 0;
}
