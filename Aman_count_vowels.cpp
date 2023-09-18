#include<stdio.h>
#include<stdlib.h>

int count_vowels(char*);

int count_vowels(char *arr)
{
    int count = 0;
    char *ptr = NULL;
    ptr = arr;
    while(*ptr != '\0')
    {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
        {
            count++;
        }
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
    int count_flag = count_vowels(str);
    printf("The vowels present = %d", count_flag);
    return 0;
}
