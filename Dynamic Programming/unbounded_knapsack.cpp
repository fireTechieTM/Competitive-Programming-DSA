//Time Complexity: O(s*len(a))
//Space Complexity: O(s)

ll unbounded_knapsack(vector<ll>& a, vector<ll>& v, int s) {
   vector<ll> k(s + 1, 0);
   for(int i = 1; i <= s; i++) {
       for(int j = 0; j < a.size(); j++) {
           if(i - a[j] >= 0) {
               k[i] = max(k[i], k[i - a[j]] + v[j]);
           }
       }
   }
   return k[s];
}
