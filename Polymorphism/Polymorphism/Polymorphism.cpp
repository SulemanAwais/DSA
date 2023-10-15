// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class A {
public:
    int a, b, c;
    A()
    {

    }
    A(int a_)
    {
        a = a_;
        cout << "\nfirst\n";
    }
    A(int a_,int b_)
    {

        a = a_;
        b = b_;
        cout << "\second\n";

    }
    A(int a_,int b_,int c_)
    {
        a = a_;
        b = b_;
        c = c_;
        cout << "\third\n";


    }

    static void sum(int a, int b)
    {
        cout<< a + b<<" i";
    }
    static void sum(double a, double b)
    {
        cout<< a + b <<" d";
    }

};

int main()
{
    A aa;
    cout << aa.b;
    A* a = new A(1);
    cout << a->b;
    A* b = new A(1,2);
    A* c = new A(1,2,3);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
