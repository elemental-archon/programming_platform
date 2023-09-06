/*you have to find missing number in the given array*/

#include<stdio.h>
#include<stdlib.h>

int missing(int ar[], int N)
{
    int a=0;
    int temp[N+1];
    for(int i=0;i<N;i++)
    {
        temp[ar[i]-1] = 1;
    }
    for(int i=0;i<N+1;i++)
    {
        if(temp[i]==0)
          a=i+1;
    }
    return a;  
}

int main(void)
{
    int arr[9] = {1, 4, 5, 3, 6, 7, 9, 2, 10};
    for(int i=0;i<9;i++)
    {
        printf("\t%d", arr[i]);
    }
    int miss = missing(arr, 9);
    printf("\nThe missinig number is %d", miss);

    return 0;
}
