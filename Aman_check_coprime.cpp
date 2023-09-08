/*check if two numbers are co-prime or not*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int first_no(int);
int second_no(int);

void first_no(int *ar, int a)
{
 int i=0;
    for(int j=1;j<=a;j++)
    {
        if(a%j==0)
        {  *(ar+i)=j;
           i++;
        }
    }
    return;
}
void second_no(int *mr, int b)
{
    int i=0;
    for(int j=1;j<=b;j++)
    {
        if(b%j==0)
        {  *(mr+i)=j;
           i++;
        }
    }
    return;
}


int main(void)
{
    int a, b;
    int k=0;
    int z=0;
    int m=0;
    int count=0;
    int *arr=NULL;
    int *srr=NULL;
    arr=(int*)calloc(5,sizeof(int));
    srr=(int*)calloc(5,sizeof(int));
    printf("enter the first number ");
    scanf("%d", &a);
   printf("enter the second number ");
    scanf("%d", &b);
    
    first_no(arr, a);
    second_no(srr, b);
    printf("factors of %d\n",a);
    while(*(arr+k)!=0)
    {
        printf("%d\t", *(arr+k));
        k++;
    }
    printf("\nfactors of %d\n",b);
    while(*(srr+z)!=0)
    {
        printf("%d\t", *(srr+z));
        z++;
    }
    
    while(*(arr+m)!=0||*(srr+m)!=0)
    {
        if(*(arr+m)==*(srr+m))
        {
            count++;
        }
        m++;
    }
    if(count==1)
      printf("\nThe numbers are co=prime");
    else
      printf("\nthe numbers are not co-prime");
    return 0;
}
