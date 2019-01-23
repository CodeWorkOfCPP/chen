#include <iostream>
using namespace std;

void A(int n, char a, char b, char c)
{
    if(n==1)
    {
        cout << n << ":" << a << "-->" << c << endl; 
    }
    else
    {
        A(n-1,a,c,b);
        cout << n << ":" << a << "-->" << c << endl; 
        A(n-1,b,a,c);
    }
}

int main()
{   
    int num = 0;
    cin >> num;
    A(num,'a','b','c');
    return 0;
}

