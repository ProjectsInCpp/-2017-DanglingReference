// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct TempClass
{
    int variable = 0;
    TempClass()
    {
        cout << "CTOR" << endl;
    }

    TempClass(const TempClass& tempClass)
    {
        variable = tempClass.variable;
        cout << "CTOR" << endl;
    }

    void toString() const
    {
        cout << "NoSiema: " << variable << endl;
    }

    ~TempClass()
    {
        cout << "Nie zyje!" << endl;
    }
};

auto test()
{
    TempClass tmpClass;
    auto tempLambda = [&tmpClass]()
    {
        tmpClass.toString();
    };

    std::cout << "Siema" << std::endl;
    tempLambda();
    std::cout << "Siema" << std::endl;
    return tempLambda;
}

int main()
{
    auto x = test();
    cout << "po wywolaniu test()" << endl;
    x();

    return 0;
}
