#include <iostream>

class Base
{
    public:
        virtual void print()=0;
};

class Second: public Base
{
    void print()
    {
        std::cout <<"Second class";
    }
};

int main(int argc, char *argv[])
{
    Base *ptrOne;
    Second one;
    
    ptrOne = &one;
    ptrOne->print();

    return 0;
}
