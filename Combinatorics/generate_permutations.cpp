//Time Complexity: O(len(a)*len(a)!)
//Space Complexity: O(len(a)*len(a)!)

vector<vector<T>> generate_permutations(vector<T> a) {
   vector<vector<T>> permutations;

   sort(a.begin(), a.end());
   while(next_permutation(a.begin(), a.end())) permutations.push_back(a);

   return permutations;
}
