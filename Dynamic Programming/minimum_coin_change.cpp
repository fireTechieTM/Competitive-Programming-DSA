//Time Complexity: O(s*len(a))
//Space Complexity: O(s)

ll minimum_coin_change(vector<ll>& a, int s) {
   vector<ll> k(s + 1, LLONG_MAX); k[0] = 0;
   for(int i = 1; i <= s; i++) {
       for(int j = 0; j < a.size(); j++) {
           if(i - a[j] >= 0) {
               k[i] = min(k[i], k[i - a[j]] + 1);
           }
       }
   }
   return k[s];
}
