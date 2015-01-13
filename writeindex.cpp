#include <fstream>
#include "share/term_index/term_index.h"
#include <sstream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    TermIndex searcher("ru_ru");
    ifstream ifile("word_id.txt");
    string temp;
    while (getline(ifile, temp)) {
        cout << temp << endl;
    }
    ifile.close();
    return 0;
}
