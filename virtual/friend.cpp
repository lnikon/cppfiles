#include <iostream>

class beta;

class alpha
{
    private:
        int data;
            alpha(): data(3) { }
            friend int frifunc(alpha, beta);
};

class beta
{
    private:
        int data;
    public:
        beta(): data(4542) { }
        friend int frifunc(alpha, beta);
};

int frifunc(alpha a, beta b)
{
    return (a.data + b.data);
}

int main(int argc, char **argv)
{
    alpha aa;
    beta bb;
    int dd = frifunc(aa,bb);
    std::cout <<dd<<std::endl;
    return 0;
}
