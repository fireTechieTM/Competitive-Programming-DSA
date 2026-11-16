#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

using T = int;
struct Comparator {
    bool operator()(const T& a, const T& b) const {
        return a < b;
    }
};

int main() {
    vector<T> list = {3, 1, 4, 5, 2};
    sort(list.begin(), list.end(), Comparator());

    cout << "Sorted list" << endl;
    for(int i = 0; i < list.size(); i++) {
        cout << list[i] << ' ';
    }
    cout << endl;

    priority_queue<T, vector<T>, Comparator> my_priority_queue;
    my_priority_queue.push(14);
    my_priority_queue.push(2);
    my_priority_queue.push(-5);
    my_priority_queue.push(7);

    cout << "Sorted priority queue" << endl;
    while(!my_priority_queue.empty()) {
        cout << my_priority_queue.top() << ' ';
        my_priority_queue.pop();
    }
    
    return 0;
}
