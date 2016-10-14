#include <iostream>

static const int SIZE = 999;

int main()
{
    int num[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int * ptrNum = num;
    int i = 0, j = 0;
    while(*ptrNum) ++i;
    while(i != 0)
    {
        ++j;
        int ten = 10*i;
        --i;
        std::cout <<"raz "<<j<<" "<<((*num)/ten)%10<<std::endl;
    }
    
    return 0;
}
