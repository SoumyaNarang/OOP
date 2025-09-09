#include<stdio.h>
void reverse(int *arr,int n)
{
    int *start=&arr[0];
    int *end=&arr[n-1];

    while(start<end)
    { 
        int temp;
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}
int main()
{
    int n;

    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);

    printf("Reversed array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}