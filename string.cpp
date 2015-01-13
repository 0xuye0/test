#include <iostream>
using namespace std;
#include <string>
int main()
{
    string a = "我是徐也";
    const char* p = a.c_str();
    while( *p != 0 )
    {
        cout << (int)*p << endl;
        p++;
    }
    return 0;
}
