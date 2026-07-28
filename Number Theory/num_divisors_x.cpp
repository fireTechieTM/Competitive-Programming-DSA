//Time Complexity: O(sqrt(x))
//Space Complexity: O(1)

//Includes 1 and Itself in the Count
ll num_divisors(ll x) {
   int ans = 0;
   for(ll i = 1; i*i <= x; i++) {
       if(x % i == 0) ans++;
   }
   return ans * 2;
}
