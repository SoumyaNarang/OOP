#include <stdio.h>

int main() {
    int a = 6;
    int *ptr = &a;

    printf("Address of a is: %p\n", ptr);
    printf("Value of a is: %d\n", *ptr);
    
    return 0;
}
