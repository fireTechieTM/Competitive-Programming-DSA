#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

//Time Complexity: O(n^2)
//Space Complexity: O(n^2)

//(n k) = pascalsTriange(x >= n)[n][k]
vector<vector<ll>> generate_pascals_triangle(int n, int MOD = 1e9 + 7) {
   vector<vector<ll>> a(n);
  
   for (int i = 0; i < n; i++) {
       vector<ll> row(i + 1, 1);
      
       for (int j = 1; j < i; j++) {
           row[j] = ((a[i - 1][j - 1] % MOD) + (a[i - 1][j] % MOD)) % MOD;
       }
      
       a[i] = row;
   }

   return a;
}

int main() {
    int n = 10;
    vector<vector<ll>> pascals_triangle = generate_pascals_triangle(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << pascals_triangle[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
