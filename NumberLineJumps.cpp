#include <bits/stdc++.h>
#include <iostream>
class Kangaroo{
    private: int x1,x2,v1,v2;
             int i,j;
    public: void kangaroo(){
        std::cin>>x1>>v1>>x2>>v2;
        j=0;
            for(i=0;i<10000 && j==0;i++){
                if (x1 + v1 * i == x2 + v2 * i) {
                j=1;
            }
        }
        if(j==1){
            std::cout<<"YES";
        }
        else if(j==0){
            std::cout<<"NO";
        }
    }
};
int main(){
    Kangaroo k;
    k.kangaroo();
}
