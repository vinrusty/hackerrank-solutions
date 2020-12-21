#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n,d,m,j,k;
    int s,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d>>m;
    if(n>1){
        for(j=0;j<=n-m;j++){
            for(k=j;k<j+m;k++){
                s = s + a[k];
            }
            if(s%d==0){
                count++;
            }
            s = 0;
        }
    }
    else{
        if(a[0]==d){
            count++;
        }
    }
    cout<<count;
    return 0;
}
