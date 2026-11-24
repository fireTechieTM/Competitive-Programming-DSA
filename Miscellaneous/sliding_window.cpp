#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int sliding_window(vector<int>& list, int target) {
    int left = 0, right = 0, sum = list[0], n = list.size(), ans = -1;
    
    while(left < n && right < n) {
        if(sum < target) {
            right++;
            //to stop potential compiler level errors
            if(right >= n) break; 
            sum += list[right];
        } else if(sum > target) {
            sum -= list[left];
            left++;
        } else if(sum == target) {
            ans = max(ans, right - left + 1);
            sum -= list[left];
            left++;
        }
    }

    return ans;
}

int main() {
    vector<int> list = {3, 1, 2, 1, 4, 1, 1, 1, 1};
    int n = list.size();

    int largest_window = sliding_window(list, 4);
    cout << largest_window;

    return 0;
}
