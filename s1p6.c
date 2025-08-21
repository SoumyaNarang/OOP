#include<stdio.h>
int main()
{
    int arr[5];

    printf("Enter the elements of the array: ");

    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    int *ptr=&arr[0];
  
    printf("Elements of the array are: \n");
    for(int i=0; i<5; i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }

    return 0;
}