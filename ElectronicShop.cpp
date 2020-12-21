#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int b,n,m;
    int s=0;
    int k[1000],d[1000];
    cin>>b>>n>>m;
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    for(int j=0;j<m;j++){
        cin>>d[j];
    }
    int pmax=-1;
    for(int p=0;p<n;p++){
        for(int l=0;l<m;l++){
            s=k[p]+d[l];
            if(s>pmax && s<=b){
                pmax=s;
            }
        }
    }
    cout<<pmax;
    return 0;
}
