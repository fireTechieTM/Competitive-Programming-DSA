//Time Complexity: O(sqrt(n))
//Space Complexity: O(sqrt(n))

vector<int> prime_factorization(ll x) {
  vector<int> a;
  
  for(int i = 2; i <= sqrt(x); i++) {
      while(x % i == 0) {
          a.push_back(i);
          x /= i;
      }
  }
  if(x > 1) a.push_back(x);

  return a;
}


int number_of_contiguous_subarrays(const vector<int>& a) {
   int ans = 1;
  
   for(int i = 1; i < a.size(); i++) {
       if(a[i] != a[i - 1]) ans++;
   }
  
   return ans;
}


ll num_prime_divisors(ll x) { return number_of_contiguous_subarrays(prime_factorization(x)); }
