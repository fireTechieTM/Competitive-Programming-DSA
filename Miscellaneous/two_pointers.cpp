#include <iostream>
#include <vector>
#include <utility>
using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(n)

using T = int;
//'list' must be sorted
pair<int, int> two_pointers(vector<T>& list, T target) {
    int left = 0, right = list.size() - 1;

    while(left < right) {
        if(list[left] + list[right] == target) return {left, right};
    	  if(list[left] + list[right] < target) left++;
    	  if(list[left] + list[right] > target) right--;
    }

    return {-1, -1}; //If you didn’t find target
}


int main() {
    vector<int> list = {1, 3, 7, 8, 11, 14};
    int n = list.size();
    int target = 19;
    
    pair<int, int> indices = two_pointers(list, target);
    cout << list[indices.first] << " plus " << list[indices.second] << " equals " << target << endl;

    target = 15;
    indices = two_pointers(list, target);
    cout << "There are no two distinct values in list that add to " << target;

    return 0;
}
