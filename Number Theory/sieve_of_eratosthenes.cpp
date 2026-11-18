#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//Time Complexity: O(nloglogn)
//Space Complexity: O(nloglogn)

//Includes i as a factor of itself if i is prime
//Does not account for multiplicity
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

int main() {
    int n = 100;
    vector<vector<int>> my_sieve = sieve_of_eratosthenes(n);

    for(int i = 1; i <= n; i++) {
        cout << i << " consists of prime factors: ";
        for(int j = 0; j < my_sieve[i].size(); j++) {
            cout << left << setw(3) << my_sieve[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
