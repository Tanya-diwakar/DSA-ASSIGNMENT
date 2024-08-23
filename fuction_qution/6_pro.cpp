//Add digits using fuction//
#include<iostream>
using namespace std;
int AddDigit(int num)
{
    while(num>9){
        int ans=0,rem;
        while(num!=0)
        {
            // modulo kese bhi numbers se one by one number niklne ke liye use krte hai//
            rem=num%10;
            num/=10;
            ans+=rem;
        }
        num=ans;
    }
    return num;
}
int main()
{
    int num;
     cout<<"enter  number:";
    cin>>num;
   cout<<AddDigit(num);
}