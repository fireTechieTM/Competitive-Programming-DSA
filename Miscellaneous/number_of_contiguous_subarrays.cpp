//Time Complexity: O(len(a))
//Space Complexity: O(1)

int number_of_contigous_subarrays(const vector<T>& a) {
   int ans = 1;

   for(int i = 1; i < a.size(); i++) {
       if(a[i] != a[i - 1]) ans++;
   }

   return ans;
}
