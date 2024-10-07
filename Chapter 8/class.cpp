#include<iostream>
using namespace std;
class book
{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    book b1;
    b1.title = "harry potter";
    b1.author = "jk rowling";
    b1.pages = 500;

    // book b2;
    // b2.title = "lord of the rings";
    // b2.author = "tolkein";
    // b2.pages = 700;
    
    cout<<b1.pages;
    return 0;
}