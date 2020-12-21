#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class ApplesAndOranges{
    public: 
    void countApplesAndOranges(){
        long long int s,t,m,n,a,b,i,j;
        long long int Apple,Orange = 0;
        cin>>s>>t;
        cin>>a>>b;
        cin>>m>>n;
        int ap[100000],orr[100000];
        for(i=0;i<m;i++){
            cin>>ap[i];
            ap[i] = ap[i] + a;
            if(ap[i]>=s && ap[i]<=t){
                Apple++;
            }
        }
        for(j=0;j<n;j++){
            cin>>orr[j];
            orr[j] = orr[j] + b;
            if(orr[j]>=s && orr[j]<=t){
                Orange++;
            }
        }
        cout<<Apple<<endl;
        cout<<Orange<<endl;        
    }
};
int main(){
    ApplesAndOranges o;
    o.countApplesAndOranges();
    return 0;
}
