#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a::"<<endl;
    cin>>a;
    cout<<"enter the value of b::"<<endl;
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"output after swaping the a,b::"<<a<<endl<<b<<endl;
     
}