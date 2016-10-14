#include "main.h"

void arrCopy(int source[SIZE], int dest[SIZE])
{
    for(int i = 0; i < SIZE - 1; ++i)
        dest[i] = source[i];
}

void arrFill(int arr[SIZE])
{
    for(int i = 0; i < SIZE - 1; ++i)
    {
        j = rand() % 101;
        arr[i] = j;
    }
}

void arrPrint(int arr[SIZE])
{
    for(int i = 0; i < SIZE - 1; ++i)
        std::cout <<arr[i]<<std::endl;
}

void arrPrint(int arr[SIZE], int a, int b)
{
    if(b > SIZE || a > SIZE || a > b || a == b || a < 0 || b < 0 || b = 0)
        exit(1);

    while(a != b)
    {
        std::cout <<arr[a]<<std::endl;
    }
}

int main()
{
    int arr[SIZE];
    int brr[SIZE];

    arrFill(arr);
    arrCopy(arr,brr);

    return 0;
}

