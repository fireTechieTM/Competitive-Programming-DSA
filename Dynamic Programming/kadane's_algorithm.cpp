//Time Complexity: O(len(a))
//Space Complexity: O(1)

ll kadanes_algorithm(vector<ll>& a) {
   ll ans = 0, c = 0;
   for(int i = 0; i < a.size(); i++) {
       c = max(c, c + a[i]);
       ans = max(c, ans);
   }
   return ans;
}
