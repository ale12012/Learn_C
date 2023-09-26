#include <stdio.h>
#include <stdlib.h>


int main()
{
    int* integerArr = malloc(sizeof(int) * 10);
    printf("size of array in memory: %i bytes\n", sizeof(integerArr));
    printf("number of elements in array: %i\n", sizeof(integerArr)/sizeof(integerArr[0]));
    printf("IntegerArr starts at memory adress %x\n", &integerArr);
    
    for (int i=0; i < 10; i++)
    {
        integerArr[i] = i*2;
        printf("integerArr[%i] = %i\n", i, integerArr[i]);
    }
    return 0;
}
