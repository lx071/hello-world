#include <stdio.h>
#define NUMBER 3

int main()
{

    int a = 10;

#ifdef DEBUG
    printf("xxxxxxx\n");
#endif

    for(int i = 0; i < NUMBER; i++)
    {
        printf("hello!\n");
    }
    return 0;
}