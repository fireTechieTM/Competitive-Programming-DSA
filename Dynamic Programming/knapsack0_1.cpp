//Time Complexity: O(s*len(a))
//Space Complexity: O(s*len(a))

ll knapsack0_1(vector<ll>& a, vector<ll>& v, int s) {
   vector<vector<ll>> k(s + 1, vector<ll>(a.size() + 1, 0));
   for(int i = 1; i <= s; i++) {
       for(int j = 1; j <= a.size(); j++) {
           k[i][j] = k[i][j - 1];

           if(i >= a[j]) {
               k[i][j] = max(k[i][j], k[i - a[j - 1]][j - 1] + v[j - 1]);
           }
       }
   }
   return k[s][a.size()];
}
