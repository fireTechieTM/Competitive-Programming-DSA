//Time Complexity: O(len(a)^2)
//Space Complexity: O(len(a))

vector<ll> longest_increasing_subsequence(vector<ll>& a) {
   vector<ll> l(a.size(), 1);
   for(int i = 0; i < a.size(); i++) {
       for(int j = 0; j < i; j++) {
           if(a[j] < a[i]) l[i] = max(l[i], l[j] + 1);
       }
   }
   return l;
}
