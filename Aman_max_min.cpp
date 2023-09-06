/*given array A of size N of integers.
your task is to find the minimum and maximum elements in the array.*/

#include<stdio.h>
#include<stdlib.h>

int maximum(int arr[])
{
    int max=0;
    for(int i=0;i<7;i++)
    {
        if(arr[i]>max)
         max=arr[i];
    }
    return max;
}

int minimum(int arr[], int max)
{
    int min=max;
    for(int i=0;i<7;i++)
    {
        if(arr[i]<min)
         min=arr[i];
    }
    return min;
}

int main(void)
{
  int A[7] = {15, 89, 65, 60, 56, 43, 78};
  for(int i=0;i<7;i++){
    printf("\t%d", A[i]);
  }

  int ma = maximum(A);
  int mi = minimum(A, ma);

  printf("\nThe maiximum element is %d", ma);
  printf("\nThe minimum element is %d", mi);

  return 0;
}
