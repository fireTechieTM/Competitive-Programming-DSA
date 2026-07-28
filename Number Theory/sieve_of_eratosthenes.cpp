//Time Complexity: O(nloglogn)
//Space Complexity: O(nloglogn)

vector<vector<int>> sieve_of_eratosthenes(int n) {
   vector<vector<int>> a(n + 1, vector<int>());
  
   for(int i = 2; i <= n; i++) {
       if(a[i].size() > 0) continue;

       for(int j = i; j <= n; j += i) {
           a[j].push_back(i);
       }
   }

   return a;
}
