//Time Complexity: O(s*sum(c_i))
//Space Complexity: O(s*len(a))

ll bounded_knapsack(vector<ll>& a, vector<ll>& c, vector<ll>& v, int s) {
   vector<vector<ll>> k(s + 1, vector<ll>(a.size() + 1, 0));
   for(int i = 1; i <= s; i++) {
       for(int j = 1; j <= a.size(); j++) {
           for(int x = 0; x <= c[j - 1]; x++) {
               if(i >= a[j - 1] * x) {
                   k[i][j] = max(k[i][j], k[i - (a[j - 1] * x)][j - 1] + (v[j - 1] * x));
               }
           }
       }
   }
   return k[s][a.size()];
}
