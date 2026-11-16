#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;

//Time Complexity: O(n * 2^n)
//Space Complexity: O(n * 2^n)

using T = char;
vector<vector<T>> generate_subsets(const vector<T>& list) {
   vector<vector<T>> subsets;

   for(int i = 0; i < (1 << list.size()); i++) {
       subsets.push_back({});

       for(int j = 0; (1 << j) <= i; j++) {
           if((1 << j) & i) subsets[i].push_back(list[j]);
       }
   }

   return subsets;
}

int main() {
    vector<T> list = {'a', 'b', 'c', 'd'};
    int n = list.size();

    vector<vector<T>> subsets = generate_subsets(list);

    for(int i = 1; i < (1 << n); i++) {
        for(int j = 0; j < subsets[i].size(); j++) {
            cout << subsets[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
