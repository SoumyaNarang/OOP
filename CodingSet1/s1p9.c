#include <stdio.h>
int main()
{
    char *names[5]={"Rohan","Rohit","Ishita","Simran","Priya"};

    for(int i=0; i<5; i++)
    {
    printf("%s\n",names[i]);
    }

    return 0;
}