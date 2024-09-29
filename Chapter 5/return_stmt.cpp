#include<iostream>
using namespace std;
double cube(double num);        //either you write the function before 
                                //in main or declare the function and then write it later

int main()
{
    double answer = cube(5.0);
    cout<<answer;
    return 0;
}

double cube(double num)
{
    double result = num*num*num;
    return result;
}