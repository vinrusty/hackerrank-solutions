#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
class bigsum{
    private:int ar[100];
            int n;
            long s=0;
    public: void aVeryBigSum(){
        std::cin>>n;
        for(int i=0;i<n;i++){
            std::cin>>ar[i];
            s=s+ar[i];
        }
        std::cout<<s;
    }
};
int main(){
    bigsum b;
    b.aVeryBigSum();
    extern int getc (FILE *__stream);
} 
