#include <iostream>
#include <cmath>
using ld = long double;
using namespace std;

//Time Complexities: O(1)
//Space Complexities: O(1)

ld e_distance(ld x1, ld y1, ld x2, ld y2) {
   return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

int m_distance(int x1, int y1, int x2, int y2) {
   return abs(x2 - x1) + abs(y2 - y1);
}

int main() {
    cout << "The euclidean distance between (-2, -3) and (14, -5) is " << e_distance(-2, -3, 14, -5) << endl;
    cout << "The manhattan distance between (-2, -3) and 14, -5) is " << m_distance(-2, -3, 14, -5);
    
    return 0;
}
