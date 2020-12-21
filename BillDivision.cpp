#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    long long int n,k,b;
    long long int s=0;
    int bill[100000];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>bill[i];
        bill[k] = 0;
        s += bill[i];
    }
    cin>>b;
    if(b!=(s/2)){
        cout<<b-(s/2);
    }
    else{
        cout<<"Bon Appetit";
    }
    return 0;
}
