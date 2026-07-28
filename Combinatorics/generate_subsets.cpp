//Time Complexity: O(len(a)(2^len(a))
//Space Complexity: O(len(a)(2^len(a))

vector<vector<T>> generate_subsets(const vector<T>& a) {
   vector<vector<T>> subsets;

   for(int i = 0; i < (1 << a.size()); i++) {
       subsets.push_back({});

       for(int j = 0; (1 << j) <= i; j++) {
           if((1 << j) & i) subsets[i].push_back(a[j]);
       }
   }

   return subsets;
}
