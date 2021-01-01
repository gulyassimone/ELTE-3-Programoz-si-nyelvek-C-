#include <iostream>
namespace A
{
    void f()
    {
        std::cout << "A::f()"
                  << std::endl;
    }
}
namespace B
{
    void f()
    {
        std::cout << "B::f()"
                  << std::endl;
    }
}
using namespace B;
int main()
{
    f();
    A::f();
    B::f();
}