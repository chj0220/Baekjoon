#include <iostream>

int main(void)
{
    double A,B;
    std::cin>>A>>B;
    std::cout<<std::fixed;
    std::cout.precision(9);
    std::cout<<A/B<<std::endl;
    return 0;
}