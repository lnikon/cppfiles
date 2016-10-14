#include <iostream>

class Parent
{
    public:
        virtual ~Parent()
        {
            std::cout <<"Base deleted";
        }
};

class Child: public Parent
{
    public:
        ~Child()
        {
            std::cout <<"Child deleted";
        }
};


int main()
{
    Parent *ptr = new Child;
    delete ptr;
    return 0;
}
