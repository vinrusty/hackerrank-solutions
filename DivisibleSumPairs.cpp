#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
class Divisible{
    public: void divisibleSumPairs(){
        int n,k,j,i,v;
        int a[100];
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(j=0;j<n-1;j++){
            for(v=j+1;v<n;v++){
                if((a[j]+a[v])%k==0){
                    count++;
                }
            }
        }
        cout<<count;
    }
};
int main(){
    Divisible d;
    d.divisibleSumPairs();
    return 0;
}

