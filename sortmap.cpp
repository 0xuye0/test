#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp_by_value(const pair<unsigned int, float>& lhs, const pair<unsigned int,float>& rhs)
{
   return lhs.second<rhs.second;
}
int main()
{
    map<unsigned int, float> m;
    m[99] = 1.0;
    m[98] = 3.2;
    m[4] = 43.0;
    m[43] = 73.3;
    m[83] = 37.2;
    m[82] = 23.9;
    map<unsigned int, float>::iterator it = m.begin();
    while(it != m.end())
    {
        cout << it->first << "\t\t" << it->second << endl;
        it++;
    }



    cout << endl << endl << endl;

    vector< pair<unsigned int, float> > v(m.begin(),m.end());
    std::sort(v.begin(),v.end(),cmp_by_value);
    for (int i = 0; i != v.size() ; ++i)
        cout << v[i].first << "\t\t" << v[i].second << endl;
    return 0;
}
