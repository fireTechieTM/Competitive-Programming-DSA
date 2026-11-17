#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

// Time Complexity: O(nm)
// Space Complexity: O(nm)

//both dimensions of 'a' are 1-indexed
vector<vector<ll>> prefix_sum_up(vector<vector<ll>> a) {
   for(int i = 1; i < a.size(); i++) {
       for(int j = 1; j < a[0].size(); j++) {
           a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
       }
   }
   return a;
}

//both dimensions of 'prefix_sum' are 1-indexed
ll query_prefix_sum(const vector<vector<ll>>& prefix_sum, int row_1, int column_1, int row_2, int column_2) {
    // r1 <= r2, c1 <= c2
    // rectangle start coordinates (upper-left)
    int r1 = row_1, c1 = column_1;
    // rectangle end coordinates (lower-right)
    int r2 = row_2, c2 = column_2;

    //sum of vals from positions [(x1, y1), (x2, y2)]
    return prefix_sum[r2][c2]
        - prefix_sum[r1 - 1][c2]
        - prefix_sum[r2][c1 - 1]
        + prefix_sum[r1 - 1][c1 - 1];
}


int main() {
    //'list[0]' must be initialized as all 0s
    //'list' must be 1-indexed (0 at first position)
    vector<vector<ll>> list = {{0, 0, 0, 0},
                               {0, 1, 2, 1},
                               {0, 1, 1, 3},
                               {0, 1, 0, 5}};
    int n = list.size() - 1;
    int m = list[0].size() - 1;

    vector<vector<ll>> prefix_sum = prefix_sum_up(list);

    // prints out prefix sum (without 0 at position 1)
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << prefix_sum[i][j] << ' ';
        }
        cout << endl;
    }

    //query_prefix_sum(prefix_sum, r1, c1, r2, c2)
    ll query = query_prefix_sum(prefix_sum, 1, 2, 3, 3);
    cout << query;

    return 0;
}
