#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

//Time Complexity: O(log(n))
//Space Complexity: O(1)

using T = int;
T binary_search(vector<T>& list, T target) {
    int left = 0, right = list.size() - 1, middle;

    //Terminate posttest whether the only possible answer, the value at l = r = m, is the target
    while(left <= right) {
        middle = left + ((right - left) / 2);
        if(list[middle] < target) left = middle + 1;
        else if(list[middle] > target) right = middle - 1;
        else return middle;
    }

    return -1; //If you didn’t find target
}


int main() {
    vector<T> list = {-2, 0, 3, 6, 8, 11, 13};
    int n = list.size();

    cout << "These are the positions of each value in list" << endl;
    for(int i : list) {
        cout << i << ' ' << binary_search(list, i) << endl;
    }

    cout << endl << "These are values non-existent in 'list'" << endl;
    for(int i : {-7, -3, 14, 123}) {
        cout << i << ' ' << binary_search(list, i) << endl;
    }


    return 0;
}
