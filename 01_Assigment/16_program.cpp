//factorial of a number//
#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"enter number::";
    cin>>n;
    for(int i=1;i<=n;i=i+1){
        fact=fact*i;
    }
    cout<<"factorial of number is::"<<fact;
}