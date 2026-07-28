//Time Complexity: O(len(a))
//Space Complexity: O(1)

int longest_run(const vector<T>& a) {
   if (a.empty()) return 0;

   int ans = 1, curr = 1;

   for (int i = 1; i < a.size(); i++) {
       if (a[i] == a[i - 1]) curr++;
       else curr = 1;
       ans = max(ans, curr);
   }
  
   return ans;
}
