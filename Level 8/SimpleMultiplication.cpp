#include <iostream>
using namespace std;
int simpleMultiplication(int a)
{
    if(a % 2 == 0)
    {
        a *= 8;
    }
    else
    {
        a *= 9;
    }
    return a;
}
int main()
{
    std::cout << simpleMultiplication(11) << "\n";
    return 0;
}