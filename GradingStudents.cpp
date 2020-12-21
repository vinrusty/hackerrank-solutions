#include <bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;
class grade{
    public:void gradingStudents(){
        long long int n,grades[1000];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>grades[i];
        }
        for(int j=0;j<n;j++){
            if(grades[j] - grades[j] % 5 + 5 >= 40 && grades[j] % 5 >= 3){
                grades[j] = grades[j] - grades[j] % 5 + 5;
            }
            cout<<grades[j]<<endl;
        }
    }
};
int main(){
        grade g;
        g.gradingStudents();
        return 0;
}
