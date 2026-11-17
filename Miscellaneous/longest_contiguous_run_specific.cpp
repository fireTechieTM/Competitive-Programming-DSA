#include <iostream>
#include <vector>
using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(1)

using T = int;
int specific_longest_run(const vector<T>& a, T run_value) {
   int ans = 0, curr = 0;

   for (auto val : a) {
       if(val == run_value) {
           curr++;
           ans = max(ans, curr);
       }
       else curr = 0;
   }

   return ans;
}


int main() {
    vector<T> list = {1, -1, -1, 2, 5, 5, 5, 0};
    int n = list.size();

    int longest_run_of_same_values = specific_longest_run(list, 5);
    cout << longest_run_of_same_values;

    return 0;
}
