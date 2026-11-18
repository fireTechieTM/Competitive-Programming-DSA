#include <iostream>
using ll = long long;
using namespace std;

//Time Complexity: O(sqrt(x))
//Space Complexity: O(1)

bool prime(ll x) {
   if(x < 2) return false;
    
   for(int i = 2; i * i <= x; i++) {
       if(x % i == 0) return false;
   }
   return true;
}

int main() {
    cout << prime(7) << endl;
    cout << prime(2027) << endl;
    cout << prime(10) << endl;
    cout << prime(2027 * 2);

    return 0;
}
