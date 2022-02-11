#include <iostream>
int main(void)
{
    int n,res=0;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        res=res+i;
    }
    std::cout<<res<<std::endl;
    return 0;
}