// find power of a number//
#include<iostream>
using namespace std;
int main(){
    int n ,pow;
    int num;
    cout<<"enter num:";
    cin>>n;

    cout<<"enter pow:";
    cin>>pow;
    num=n;
    for(int i=1;i<=pow;i=i+1){
        num=num*n;
    }
    cout<<num;

}