#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,p,f,b;
    cin>>n;
    cin>>p;
    for(int i=1;i<=n;i++){
        if(i==p && p%2==0){
            f=i/2;
            break;
        }
        else if(i==p && p%2!=0){
            f=(i-1)/2;
            break;
        }
    }
    for(int j=n;j>0;j--){
        if(j==p && j%2==0){
            if(n%2==0){
                b=(n-j)/2;
            }
            else{
                b=(n-j-1)/2;
            }
        }
        else if(j==p && j%2!=0){
            if(n%2==0){
                b=(n-j+1)/2; 
            }
            else{
                b=(n-j)/2;
            }
        }
    }
    if(f>b){
        cout<<b;
    }
    else{
       cout<<f; 
    }
    return 0;
}

