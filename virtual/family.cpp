#include <iostream>

class Parent
{
    protected:
        int baseData;
};

class Child1: virtual public Parent {};
class Child2: virtual public Parent {};
class Grandchild: public Child1, Child2 
{
    public:
        int getData() { return baseData; }
};

int main()
{
    
    return 0;
}
