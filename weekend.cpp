#include <iostream>
#include <stdio.h>
using namespace std;
class Point {
public:
    Point(int v) : m_y(v),m_x(m_y) {}
    int getX() { return m_x; }
    int getY() { return m_y; }
private:
    int m_y;
    int m_x;
};
int main()
{
    Point* inst = new Point(2014);
    printf("m_x=%d, m_y=%d\n", inst->getX(), inst->getY());
    return 1;
}

