#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;

//Time Complexity: O(n*n!)
//Space Complexity: O(n*n!)

using T = char;
vector<vector<T>> permute(vector<T> list) {
   vector<vector<T>> permutations;

   sort(list.begin(), list.end());
   while(next_permutation(list.begin(), list.end())) permutations.push_back(list);

   return permutations;
}

int main() {
    vector<T> list = {'a', 'b', 'c', 'd'};
    int n = list.size();

    vector<vector<T>> permutations = permute(list);

    for(vector<T> permutation : permutations) {
        for(int i = 0; i < n; i++) {
            cout << permutation[i] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
