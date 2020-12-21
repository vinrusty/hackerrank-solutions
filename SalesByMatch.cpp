#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    int count=0;
    int a[10000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++){
            if(a[j]==a[k] && a[j]>0){
                count++;
                a[j]=0;
                a[k]=0;
            }
        }
    }
    cout<<count;
    return 0;
}
