#include<stdio.h>
#include<string.h>

void remove_vowels(char*);

void remove_vowels(char *arr)
{
    int i, j=0;
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]!='a'&&arr[i]!='e'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u'&&
        arr[i]!='A'&&arr[i]!='E'&&arr[i]!='I'&&arr[i]!='O'&&arr[i]!='U')
        {
             arr[j++]=arr[i];
        }
    }
    arr[j]='\0';
}

int main(void)
{
    char str[15];
    printf("Enter string\n");
    fgets(str, sizeof(str), stdin);
    remove_vowels(str);
    printf("After removing vowels = %s",str);
    return 0;
}
