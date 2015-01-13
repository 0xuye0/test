#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;
int main()
{

    unsigned int a = 1;
    ostringstream b;
    b << a;
    string c = b.str();
    float d = atof(c.c_str());
    cout << d << endl << d << endl;

    float e = 1.0f;
    cout << e << endl;
    return 0;
}
