//Time Complexity: O(n^2)
//Space Complexity: O(n^2)

//(n k) = pascalsTriange(x >= n)[n][k]
vector<vector<ll>> pascals_triangle(int n) {
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
