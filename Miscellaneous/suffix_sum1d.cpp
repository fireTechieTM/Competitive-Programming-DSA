#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(n)

vector<ll> suffix_sum_up(vector<ll> list) {
  for(int i = list.size() - 2; i >= 0; i--) {
      list[i] += list[i + 1];
  }
  return list;
}


int main() {
    //'list' must be -1-indexed (0 at last position)
    vector<ll> list = {1, -1, -1, 2, 5, 5, 5, 3, 0};
    int n = list.size() - 1;

    vector<ll> suffix_sum = suffix_sum_up(list);

    // prints out prefix sum (without 0 at final position)
    for(int i = 0; i < n; i++) {
        cout << suffix_sum[i] << ' ';
    }

    // suffix sum query gets sum of values in position [l, n]
    // l >= 1 && l <= n
    int l = 4;
    cout << endl << suffix_sum[l - 1];

    return 0;
}
