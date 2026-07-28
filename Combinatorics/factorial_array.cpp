//Time Complexity: O(n)
//Space Complexity: O(n)

vector<ll> initialize_factorial(int n) {
   vector<ll> factorial(n + 1); factorial[0] = 1;
   for(int i = 1; i <= n; i++) {
       factorial[i] = ((factorial[i - 1] % MOD) * (i % MOD)) % MOD;
   }

   return factorial;
}
