// print the table of a number//
#include<iostream>
using namespace std;
int main(){

    int n,i;
    cout<<"enter the table:";
    cin>>n;
    
    for(i=1;i<=10;i=i+1)
    {
        cout<<n*i<<endl;
    }
}