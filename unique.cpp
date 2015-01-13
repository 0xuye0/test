#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int>& a)
{
    for(int i = 0;i < a.size();++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> a;
    for(int i = 10;i > 0;--i)
    {
        a.push_back(i);
        a.push_back(i+1);
        a.push_back(i-1);
    }
    print(a);
    vector<int> b = a;
    //sort(a.begin(),a.end());
    //print(a);
    vector<int>::iterator it = unique(a.begin(),a.end());
    a.erase(it,a.end());
    print(a);
    print(b);


    return 0;
}
