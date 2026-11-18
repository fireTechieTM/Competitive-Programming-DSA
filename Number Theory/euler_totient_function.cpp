#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

vector<vector<int>> sieve_of_eratosthenes(int n) {
   vector<vector<int>> a(n + 1, vector<int>());
  
   for(int i = 2; i <= n; i++) {
       if(a[i].size() > 0) continue;

       for(int j = i; j <= n; j += i) {
           a[j].push_back(i);
       }
   }

   return a;
}

//Time Complexity: O(loglogn)
//Space Complexity: O(loglogn)
//Setup Complexity: O(nloglogn) for a list, O(sqrt(n)) for individuals

//returns #{1 <= i <= n : gcd(i, n) = 1}
//prime_factorization_n must not contain multiplicity
int eulers_totient(int n, vector<int> prime_factorization_n) {
   int totient = n;
   for(int p : prime_factorization_n) totient -= totient / p;
   return totient;
}

int main() {
    int n = 100;
    vector<vector<int>> my_sieve = sieve_of_eratosthenes(n);
    
    cout << eulers_totient(36, my_sieve[36]) << endl;
    cout << eulers_totient(71, my_sieve[71]) << endl;
    //1, 5, 7, 11, 13, 17, 19, 23
    cout << eulers_totient(24, my_sieve[24]);
    
    return 0;
}
