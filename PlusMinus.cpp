#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;
class PlusMinus{
    private:long arr[1000];
            long n;
            long i;
            double c1,c2,c3;
    public: void plusMinus(){
        std::cin>>setprecision(6)>>n;
        c1=c2=c3=0.000000;
        for(i=0;i<n;i++){
            std::cin>>arr[i];
            if(arr[i]>0){
                c1++;
            }
            else if(arr[i]<0){
                c2++;
            }
            else if(arr[i]==0){
                c3++;
            }
        }
        std::cout<<setprecision(6)<<c1/n<<std::endl;
        std::cout<<setprecision(6)<<c2/n<<std::endl;
        std::cout<<setprecision(6)<<c3/n<<std::endl;
        
    }
};
int main(){
    PlusMinus p;
    p.plusMinus();
    return 0;
}
