#include <stdio.h>
int max(int *a, int *b, int *c)
{
    if(*a>=*b && *a>=*c)
    {
        return *a;
    }
    else if(*b>=*a && *b>=*c)
    {
        return *b;
    }
    else
    {
        return *c;
    }
}

int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c)
    {
        printf("All numbers are equal");
    }
    else
    {
        int ans=max(&a,&b,&c);
        printf("%d is the greatest number",ans);
    }

    return 0;
}