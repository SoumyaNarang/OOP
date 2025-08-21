#include <stdio.h>
void increment(int *ptr) //increments the value of an integer by 1
{
    *ptr+=1;
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    increment(&a);
    printf ("After incrementation number becomes: %d",a); //number is incremented

    return 0;

}