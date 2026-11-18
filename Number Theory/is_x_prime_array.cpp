#include <iostream>
#include <vector>
using namespace std;

//Time Complexity: O(nloglogn)
//Space Complexity: O(n)

vector<bool> prime(int n) {
  vector<bool> a(n + 1, true); a[0] = a[1] = false;

   for(int i = 2; i <= n; i++) {
      if(a[i] == false) continue;

      for(int j = i + i; j <= n; j += i) {
          a[j] = false;
      }
  }

  return a;
}

int main() {
    int n = 100;
    vector<bool> prime_list = prime(n);
    
    for(int i = 1; i <= n; i++) {
        if(prime_list[i] == true) {
            cout << i << " is prime" << endl;
        } else {
            cout << i << " is composite" << endl;
        }
    }
    
    return 0;
}
