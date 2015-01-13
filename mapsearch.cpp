#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,double> a;
    a[1]=0.3;
    a[2]=9.3;
    a[3]=10.2;
    int t = 4;
    for(int t = 0;t < 5;++t)
    {
        map<int,double>::iterator it = a.find(t);
        if(it!=a.end())
        {
            it->second += 100;
        }
        else
        {
            a[t] = 0.0;
        }
    }
    map<int,double>::iterator it = a.begin();
    while(it!=a.end())
    {
        cout << it->first <<" " << it->second << endl;
        it++;
    }
    cout << endl;
    return 0;
}
