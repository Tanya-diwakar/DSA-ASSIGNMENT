//sum of n natural num//
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the value of n::";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        sum=sum+i;  
    }
    cout<<sum;
 
}