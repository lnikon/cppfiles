#include <iostream>

class alpha
{
    private:
        int data1;
    public:
        alpha(): data1(999) { }
        friend class beta;
};

class beta 
{
    public:
        void func1(alpha a) { std::cout <<a.data1<<std::endl; }
};

int main()
{
    alpha a;
    beta b;
    b.func1(a);
    return 0;
}
