#include<stdio.h>
int strLength(char *s)
{
    int length= 0;
    while(*s!='\0')
    {
    length++;
    s++;
    }
    return length;
}
int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%s",str);

    printf("Length of the string: %d",strLength(str));

    return 0;
}