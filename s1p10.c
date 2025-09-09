#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    int (*p)[5]=&array;

    printf("Pointer to an array(*p): \n");
    for(int i=0; i<5; i++)
    {
        printf("Element %d: %d\n",i+1,(*p)[i]);
    }

    int a=100, b=200, c=300, d=400, e=500;

    int *arr[5]={&a,&b,&c,&d,&e};

    printf("Array of pointers int*arr[5]: \n");
    for(int i=0; i<5; i++)
    {
    printf("Element %d: %d\n",i+1,*arr[i]);
    }

    return 0;
}
