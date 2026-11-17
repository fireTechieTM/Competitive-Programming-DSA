#include <iostream>
#include <vector>
using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(1)

using T = int;
T longest_run(const vector<T>&list) {
   if (list.empty()) return 0;

   int ans = 1, curr = 1;

   for (int i = 1; i < list.size(); i++) {
       if (list[i] == list[i - 1]) curr++;
       else curr = 1;
       ans = max(ans, curr);
   }
  
   return ans;
}


int main() {
    vector<T> list = {1, -1, -1, 2, 5, 5, 5, 0};
    int n = list.size();

    int longest_run_of_same_values = longest_run(list);
    cout << longest_run_of_same_values;

    return 0;
}
