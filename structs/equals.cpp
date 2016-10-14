#include <iostream>

struct Some 
{
    int number;
    int date;
};

int main(void)
{
    Some part = { 12, 14};
    
    std::cout <<"| "<<part.number<<" | "<<part.date<<std::endl;

    return 0;
}
