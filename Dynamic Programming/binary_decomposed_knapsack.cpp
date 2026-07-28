//Time Complexity: O(s*len(a)logc_i)
//Space Complexity: O(s*len(a))

ll binary_decomposition_bounded_knapsack(vector<ll>& a, vector<ll>& c, vector<ll>& v, int s) {
   vector<ll> da, dv;
   for(int i = 0; i < a.size(); i++) {
       ll remaining = c[i], group = 1;

       while(remaining > 0) {
           ll amount = min(group, remaining);
           da.push_back(a[i] * amount);
           dv.push_back(v[i] * amount);
           remaining -= amount, group *= 2;
       }
   }

   vector<vector<ll>> k(s + 1, vector<ll>(da.size() + 1, 0));
   for(int i = 1; i <= s; i++) {
       for(int j = 1; j <= da.size(); j++) {
 	    k[i][j] = k[i][j - 1]; 
           if(i >= da[j - 1]) {
               k[i][j] = max(k[i][j], k[i - da[j - 1]][j - 1] + dv[j - 1]);
           }
       }
   }
   return k[s][da.size()];
} 
