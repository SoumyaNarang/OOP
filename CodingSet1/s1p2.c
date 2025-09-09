#include <stdio.h>
void swapByValue(int a, int b) //swaps using call by value; does not change the original variables
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("Inside swapByValue: a=%d and b=%d\n",a,b);
}
 void swapByReference(int *a, int *b) //swaps using call by reference; changes the original variables
 {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

    printf("Inside swapByReference: a=%d and b=%d\n",*a,*b);
 }
int main()
{
    int a,b;

    printf("Enter two values: ");
    scanf("%d %d",&a,&b);
    
    printf("Before swapping: a=%d and b=%d\n",a,b);

    swapByValue(a,b); //swaps values inside the function only
    printf("After swapByValue: a=%d and b=%d\n",a,b); //values remain unchanged in main

    swapByReference(&a,&b); //actually swaps values in main
    printf("After swapByReference: a=%d and b=%d\n",a,b); //values are now swapped

    return 0;
}