#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>

int main(){
    int x;
    std::cin>>x;

    if(x == 3 || x == 5 || x == 7){
        std::cout<<"YES"<<std::endl;
    }else{
        std::cout<<"NO"<<std::endl;
    }
    return 0;
}
