#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main() {
    ifstream infile("./newdoc.dat");
    string line;
    getline(infile, line);
    cout << line << endl;
    size_t pos = line.find_first_of(" ");
    while (pos!=string::npos) {
        string temp = line.substr(0, pos);
        cout << temp;
        line = line.substr(pos+1);
        pos = line.find_first_of(" ");
    }

}
