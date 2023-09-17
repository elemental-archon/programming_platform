
/*write a program to find length of string using pointer*/
#include<stdio.h>
#include<stdlib.h>

int find_length(char*);
int find_length(char *arr)
{
    int count = 0;
    char *ptr = NULL;
    ptr = arr;
    while(*ptr != '\0')
    {
       count++;
       ptr++;
    }
    return count;

}
int main(void)
{
    char *str=NULL;
    str=(char*)calloc(15,sizeof(char));
    printf("Enter string\n");
    scanf("%s",str);
    int len = find_length(str);
    printf("%d", len);
    free(str);
    return 0;
}
