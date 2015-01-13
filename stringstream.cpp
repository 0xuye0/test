#include <iostream>
#include <string>
#include <sstream>
#include "stdlib.h"
using namespace std;
int main()
{
    // float a = 4.32344f;
    // string b;
    // float c;
    // stringstream tempstream;
    // for ( int i = 0; i < 100; ++i)
    // {
    //     tempstream.clear();
    //     tempstream<<a;
    //     tempstream>>b;
    //     cout << b << endl;
    //     a+=1.0f;
    // }
    stringstream a;
    string b = "a b c d";
    a << b;
    string c;
    a >> c;
    a >> c;
    cout << "@" << c << "@" << endl;
    cout << b << endl;
    return 0;
}
