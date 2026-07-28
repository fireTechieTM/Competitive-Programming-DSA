int specific_longest_run(const vector<char>& a) {
   int ans = 0, curr = 0;

   for (auto c : a) {
       if(c == VAL) {
           curr++;
           ans = max(ans, curr);
       }
       else curr = 0;
   }

   return ans;
}
