#include <iostream>
#include <vector>
using namespace std;

void difference_array_set(vector<int>& list, int start, int end, int value) {
    list[start] += value;
    if(end + 1 < list.size()) list[end + 1] -= value;
}

vector<int> difference_array_calculate(vector<int>& list) {
    int current = 0;
    vector<int> prefix(list.size(), 0);
    
    for(int i = 0; i < list.size(); i++) {
        current += list[i];
        prefix[i] += current;
    }

    return prefix;
}

int main() {
    vector<int> list = {0, 0, 0, 0, 0, 0};
    int n = list.size();
    
    difference_array_set(list, 1, 4, 100);
    for(int i = 0; i < n; i++) cout << list[i] << ' ';
    cout << endl;

    difference_array_set(list, 3, 5, 50);
    for(int i = 0; i < n; i++) cout << list[i] << ' ';
    cout << endl;

    //after using 'difference_array_calculate'
    //you can add all elements in it to an array that is not all zeroes
    list = difference_array_calculate(list);
    for(int i = 0; i < n; i++) cout << list[i] << ' ';
    
    return 0;
}
