#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<< "a= ";cin >> a;
    cout<< "b= ";cin >> b;
    cout<< "c= ";cin >> c;
    int delta=b*b-4*a*c;
    int x1=(-b+sqrt(delta))/(2*a);
    int x2=(-b-sqrt(delta))/(2*a);
    if(a==0)
    {
        cout << "this is not a polynomial function";
        return 0;
    }
    if(a!=1)
    {
        if(b>0)
        {
            if(c>0)
            {
                cout << a << "x²+" << b << "x+" << c << endl;
            }
            if(c==0)
            {
                cout << a << "x²+" << b << "x" << endl;
            }
            if(c<0)
            {
                cout << a << "x²+" << b << "x" << c << endl;
            }
        }
        if(b==0)
        {
            if(c>0)
            {
                cout << a << "x²+"<< c << endl;
            }
            if(c=0)
            {
                cout << a << "x²" << endl;
            }
            if(c<0)
            {
                cout << a << "x²" << c << endl;
            }
        }
        if(b<0)
        {
            if(c>0)
            {
                cout << a << "x²" << b << "x+" << c << endl;
            }
            if(c==0)
            {
                cout << a << "x²" << b << "x" << endl;
            }
            if(c<0)
            {
                cout << a << "x²" << b << "x" << c << endl;
            }
        }
    }
    else
    {
        if(b>0)
        {
            if(c>0)
            {
                cout <<"x²+" << b << "x+" << c << endl;
            }
            if(c==0)
            {
                cout <<"x²+" << b << "x" << endl;
            }
            if(c<0)
            {
                cout <<"x²+" << b << "x" << c << endl;
            }
        }
        if(b==0)
        {
            if(c>0)
            {
                cout <<"x²+"<< c << endl;
            }
            if(c=0)
            {
                cout <<"x²" << endl;
            }
            if(c<0)
            {
                cout <<"x²" << c << endl;
            }
        }
        if(b<0)
        {
            if(c>0)
            {
                cout <<"x²" << b << "x+" << c << endl;
            }
            if(c==0)
            {
                cout <<"x²" << b << "x" << endl;
            }
            if(c<0)
            {
                cout <<"x²" << b << "x" << c << endl;
            }
        }
    }
    if(x1==x2)
    {
        cout << "x= " << x1 << endl;
    }
    else
    {
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }

    return 0;
}
