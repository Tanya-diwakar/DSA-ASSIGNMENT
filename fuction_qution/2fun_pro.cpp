// calculator using function//
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int ans=a+b;
    return ans;
}
int subtract(int a,int b)
{
    int sub=a-b;
    return sub;
}
int multi(int a,int b)
{
    int mul=a*b;
    return mul;
}
int divide(int a,int b)
{
    int div=a/b;
    return div;
}
int module(int a,int b)
{
    int mod=a%b;
    return mod;
}
int main(){
    int a,b;
    cout<<"enter 2 number:";
    cin>>a>>b;

   cout<< sum(a,b);
   cout<<endl;

   cout<<subtract(a,b);
   cout<<endl;

   cout<<multi(a,b);
   cout<<endl;

   cout<<divide(a,b);
   cout<<endl;

   cout<<module(a,b);
   cout<<endl;
}