#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
class sum{
    private:int n;
            int ar[1000];
            int s=0;
    public:void simpleArraySum();        
};
void sum::simpleArraySum(){
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>ar[i];
        s+=ar[i];
    }
        std::cout<<s;
}
int main(){
    sum a;
    a.simpleArraySum();
    extern int getc (FILE *__stream);
}
