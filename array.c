#include <stdio.h>
#include <stdlib.h>


int main()
{
    int* integerArr = malloc(sizeof(int) * 10);
    printf("size of array in memory: %i bytes\n", sizeof(int)*10);
    printf("IntegerArr[0] is contained in memory adress %x\n", &integerArr);
    
    for (int i=0; i < 10; i++)
    {
        integerArr[i] = i*2;
        printf("integerArr[%i] = %i\n", i, integerArr[i]);
    }
    return 0;
}
