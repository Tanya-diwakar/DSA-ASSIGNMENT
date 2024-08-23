#include<iostream>
using namespace std;
int LeepYear(int n)
{
    if(n%400==0)
    {
        return 1;
    }
    else if(n%4==0 && n%100!=0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<LeepYear(n);
}