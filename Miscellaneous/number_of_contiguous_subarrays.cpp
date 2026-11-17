#include <iostream>
#include <vector>
using namespace std;

//Time Complexity: O(n)
//Space Complexity: O(1)

using T = int;
int number_of_contigous_subarrays(const vector<T>& list) {
   int ans = 1;

   for(int i = 1; i < list.size(); i++) {
       if(list[i] != list[i - 1]) ans++;
   }

   return ans;
}


int main() {
    vector<T> list = {1, -1, -1, 2, 5, 5, 5, 0};
    int n = list.size();

    int num_contig_subarrs = number_of_contigous_subarrays(list);
    cout << num_contig_subarrs;

    return 0;
}
