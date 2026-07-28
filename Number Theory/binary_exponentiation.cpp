//Time Complexity: O(logb)
//Space Complexity: O(1)

ll power(ll a, ll b, ll MOD){
   ll ans = 1;
   while(b) {
       if(b & 1) ans = ((ans % MOD) * (a % MOD)) % MOD;
       a = ((a % MOD) * (a % MOD)) % MOD;
       b >>= 1;
   }

   return ans;
}
