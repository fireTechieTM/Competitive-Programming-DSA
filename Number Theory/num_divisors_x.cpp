#include <iostream>
using ll = long long;
using namespace std;

//Time Complexity: O(sqrt(x))
//Space Complexity: O(1)

//Another way to do this would be by accessing
//a prime array, (#p1 + 1)(#p2 + 1)(...)(#pn + 1)
// that would take O(loglogn) per action
// with O(nloglogn) setup

//Includes 1 and Itself in the Count
ll num_divisors(ll x) {
   ll ans = 0;
   bool sqrt_factor = false;
    
   for(ll i = 1; i * i <= x; i++) {
       if(i * i == x) {
           sqrt_factor = true;
           break;
       }
       
       if(x % i == 0) ans++;
   }

   return (ans * 2) + sqrt_factor;
}

int main() {
    // 36 = 2^2 * 3^2 so (3)(3) = 9
    cout << num_divisors(36) << endl;
    // 423 = 3^2 * 47^1 so (3)(2) = 6
    cout << num_divisors(423) << endl;
    // 100 = 2^2 * 5^2 so (3)(3) = 9
    cout << num_divisors(100) << endl;
    
    return 0;
}
