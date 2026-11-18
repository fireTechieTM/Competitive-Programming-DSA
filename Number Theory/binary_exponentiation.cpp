//Time Complexity: O(logb)
//Space Complexity: O(1)

ll power(ll a, ll b, ll MOD = 1e9 + 7){
   ll ans = 1;
   while(b) {
       if(b & 1) ans = ((ans % MOD) * (a % MOD)) % MOD;
       a = ((a % MOD) * (a % MOD)) % MOD;
       b >>= 1; // take out LSB
   }

   return ans;
}

int main() {
    cout << power(2, 5) << endl;
    cout << power(2, 5, 10) << endl;

    // 2^1 % = 2 % 10 = 2 and 2^5 = 32 % 10 = 2
    // 2^(x + 4y) % 10 = 2^x % 10
    cout << power(2, 3, 10) << endl;
    cout << power(2, 3 + 4*10, 10);

    return 0;
}
