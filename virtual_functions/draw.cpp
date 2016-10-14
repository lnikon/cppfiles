#include <iostream>

class Base 
{
    public:
        void show()
        {
            std::cout <<"Base class";
        }
};

class Dev1 : public Base    
{
    public:
        void show()
        {
            std::cout <<"Dev1 class";
        }
};

class Dev2 : public Base
{
    public:
        void show()
        {
            std::cout <<"Dev2";
        }
};


int main()
{
    Base someBaseClass;
    int * ptrToBase = &someBaseClass;
    return 0;
}
