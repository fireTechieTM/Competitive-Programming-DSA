#include <iostream>
#include <vector>
using ll = long long;
using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(n)

vector<ll> initialize_factorial(int n, int MOD = 10e9 + 7) {
   vector<ll> factorial(n + 1); factorial[0] = 1;
   for(int i = 1; i <= n; i++) {
       factorial[i] = ((factorial[i - 1] % MOD) * (i % MOD)) % MOD;
   }

   return factorial;
}

int main() {
   int n = 20;
   
   vector<ll> factorial_array = initialize_factorial(n);

   for(int i = 0; i < n; i++) {
      cout << factorial_array[i] << ' ';
   }
   
   return 0;
}
