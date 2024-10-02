#include<iostream>
using namespace std;
int main()
{
    int n1,n2,result;
    char op;
    cout<<"Enter first number";
    cin>>n1;
    cout<<"Enter operator";
    cin>>op;
    cout<<"Enter second number";
    cin>>n2;
    if(op == '+')
    {
        result = n1+n2;
    }
    else if(op == '-')
    {
        result = n1-n2;
    }
    else if(op == '*')
    {
        result = n1*n2;
    }
    else if(op == '/')
    {
        result = n1/n2;
    }
    else{
        cout<<"error";
    }
    cout<<result;

}