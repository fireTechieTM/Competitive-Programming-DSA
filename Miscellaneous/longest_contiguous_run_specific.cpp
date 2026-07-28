//Time Complexity: O(len(a))
//Space Complexity: O(len(a))

int specific_longest_run(const vector<T>& a) {
   int ans = 0, curr = 0;

   for (auto c : a) {
       if(c == VALUE) {
           curr++;
           ans = max(ans, curr);
       }
       else curr = 0;
   }

   return ans;
}
