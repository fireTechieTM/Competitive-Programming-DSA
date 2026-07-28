//Time Complexity: O(log(len(a)))
//Space Complexity: O(1)

T binary_search(vector<T>& a, T t) {
   int l = 0, r = a.size() - 1, m;

   while(l < r) {
       m = l + ((r - l) / 2);
       if(a[m] < t) l = m + 1;
       else if(a[m] > t) r = m - 1;
       else return m;
   }

   return -1;
}
