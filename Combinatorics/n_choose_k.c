//Time Complexity: O(nlogMOD) setup, O(1) query
//Space Complexity: O(n) setup

const int MOD = SOME_PRIME;

ll power(ll a, ll b){
  ll ans = 1;
  while(b) {
      if(b & 1) ans = ((ans % MOD) * (a % MOD)) % MOD;
      a = ((a % MOD) * (a % MOD)) % MOD;
      b >>= 1;
  }
  return ans;
}

vector<ll> initialize_factorial(int n) {
   vector<ll> factorial(n + 1); factorial[0] = 1;
   for(int i = 1; i <= n; i++) {
       factorial[i] = ((factorial[i - 1] % MOD) * (i % MOD)) % MOD;
   }
   return factorial;
}

vector<ll> initialize_inverse_factorial(vector<ll>& factorial, int n) {
   vector<ll> inverseFactorial(n + 1); inverseFactorial[n] = power(factorial[n], MOD - 2);
   for (int i = n; i >= 1; i--) {
       inverseFactorial[i - 1] = ((inverseFactorial[i] % MOD) * (i % MOD)) % MOD;
   }
   return inverseFactorial;
}

ll nCk(vector<ll>& factorial, vector<ll>& inverseFactorial, int n, int k) {
   return ((factorial[n] * inverseFactorial[k]) % MOD * inverseFactorial[n - k]) % MOD;
}

//Example Usage
vector<ll> factorial = initialize_factorial(n);
vector<ll> inverse_factorial = initialize_inverse_factorial(factorial, n);
nCk(factorial, inverse_factorial, n, k);
