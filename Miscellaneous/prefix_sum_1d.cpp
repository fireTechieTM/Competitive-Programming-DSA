#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(n)

//expects 'list' to be 1-indexed
vector<ll> prefix_sum_up(vector<ll> list) {
   for(int i = 1; i < list.size(); i++) {
       list[i] += list[i - 1];
   }
   return list;
}


int main() {
    //'list' must be 1-indexed (0 at first position)
    vector<ll> list = {0, 1, -1, -1, 2, 5, 5, 5, 0};
    int n = list.size() - 1;

    vector<ll> prefix_sum = prefix_sum_up(list);

    //prints out prefix sum (without 0 at position 1)
    for(int i = 1; i <= n; i++) {
        cout << prefix_sum[i] << ' ';
    }

    return 0;
}
