#include<iostream>
using namespace std;

void sayhi(string name, int age);

int main()
{
    sayhi(" mike ", 60);
    sayhi(" john ", 40);
    sayhi(" tom ",30);
    return 0;
}

void sayhi(string name, int age)
{
    cout<<"hello"<<name<<"you are "<<age<<endl;
}