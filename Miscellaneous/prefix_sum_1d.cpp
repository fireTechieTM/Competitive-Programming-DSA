//Time Complexity: O(len(a))
//Space Complexity: O(len(a))

vector<ll> prefix_sum(vector<ll> a) {
   for(int i = 1; i < a.size(); i++) {
       a[i] += a[i - 1];
   }
   return a;
}
