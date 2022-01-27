#include <iostream>
int main(void)
{
    int num1,num2,a,b,c;
    std::cin>>num1>>num2;
    a=num2%10;
    c=num2/100;
    b=(num2-c*100-a)/10;
    std::cout<<num1*a<<std::endl;
    std::cout<<num1*b<<std::endl;
    std::cout<<num1*c<<std::endl;
    std::cout<<num1*num2<<std::endl;
    return 0;
}