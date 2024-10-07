#include<iostream>
using namespace std;
class Chef
{
    public:
        void makePaneer()
        {
            cout<<"The chef makes paneer" << endl;
        }
        void makeSalad()
        {
            cout<<"The chef makes salad"<< endl;
        }
        void makeDish()
        {
            cout<<"The chef makes food" << endl;
        }
};
class ItalianChef : public Chef
    { 

    };
int main()
{
    Chef chef;
    chef.makePaneer();
    ItalianChef m;
    m.makePaneer();
    return 0;
}