#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
class diagonal{
    private: int a[100][100];
             long n;
             int s1,s2=0;
             
    public: void diagonalDifference(){
        std::cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                std::cin>>a[i][j];
                if(i==j){
                    s1=s1+a[i][j];
                }
                if(i+j==n-1){
                    s2=s2+a[i][j];
                }
            }
        }
        std::cout<<abs(s1-s2);
    }
};
int main(){
    diagonal d;
    d.diagonalDifference();
    return 0;
}
