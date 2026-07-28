// Time Complexity: O(len(a)*len(a[0]))
// Space Complexity: O(len(a)*len(a[0]))

vector<vector<ll>> prefix_sum(vector<vector<ll>> a) {
   for(int i = 1; i < a.size(); i++) {
       for(int j = 1; j < a[0].size(); j++) {
           a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
       }
   }
   return a;
}
