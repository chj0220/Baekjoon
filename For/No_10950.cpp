#include <iostream>
int main()
{
    int t,a,b;
    std::cin>>t;
    for(int i=0;i<t;i++){
        std::cin>>a>>b;
        if((a<=0)||(a>=10)||(b<=0)||(b>=10)) break;
        std::cout<<a+b<<std::endl;
    }
    return 0;
}