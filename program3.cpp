// program to find the largest of three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter num 1: "<<endl;
    cin>>a;
    cout<<"enter num 2: "<<endl;
    cin>>b;
    cout<<"enter num 3:"<<endl;
    cin>>c;
    if(a>b)
    {
        if(a>c)
        cout<<a<<" is the greatest number."<<endl;
        else
         cout<<c<<" is the greatest number."<<endl;
    }
    else
    {
        if(b>c)
         cout<<a<<" is the greatest number."<<endl;
        else
         cout<<c<<" is the greatest number."<<endl;
    }
}
