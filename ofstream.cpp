#include <fstream>
using namespace std;
int main()
{
    ofstream a("a.txt");
    a<<1<<"2"<<endl;
    a.close();
    return 0;
}
