#include <iostream>

void bsort();

int main()
{
    int * unsortedArray = new int;
    unsortedArray = {1,5,6,3,5,7,2,3,4,6,5};
    return 0;
}

void(int * unsortedArray)
{
    int item = 0;
    int nextItem = 1;

    while(unsortedArray)
        while(unsortedArray - 1)
            if((unsortedArray + item) > (unsortedArray + nextItem))
            {
                int temp = unsortedArray[nextItem];
                unsortedArray[nextItem] = unsortedArray[item];
                unsortedArray[item] = temp;
                ++i; ++j;
            
            }
}
