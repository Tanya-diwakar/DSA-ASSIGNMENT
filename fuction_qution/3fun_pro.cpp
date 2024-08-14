//swap two number using function//
#include<iostream>
using namespace std;
void swappNumber(int &x ,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    cout<<"enter two numbers::";
    cin>>x>>y;
    swappNumber(x,y);
    cout<<x<<""<<y<<""<<endl;
}