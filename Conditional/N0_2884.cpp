#include <iostream>

int main(void)
{
    int h,m;
    std::cin>>h>>m;
    if((h>=0&&h<=23)&&(m>=0&&m<=59)){
        if((m-45)>=0) std::cout<<h<<' '<<m-45<<std::endl;
        else if((m-45)<0&&h==0) std::cout<<h+23<<' '<<m+15<<std::endl;
        else if((m-45)<0) std::cout<<h-1<<' '<<m+15<<std::endl;
    }
    return 0;
}