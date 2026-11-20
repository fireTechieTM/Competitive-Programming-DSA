#include <iostream>
#include <vector>
using namespace std;

//t - tree, c - current, p - parent
void dfs(vector<vector<int>>& t, int c, int p) {
   // example node process
   cout << c << '\n';

   for(int u : t[c]) {
       if(u != p) {
           dfs(t, u, c);
       }
   }
}


int main() {
    int n = 8;
    vector<vector<int>> tree(n + 1);
    tree[1] = {2, 3, 4};
    tree[2] = {5};
    tree[3] = {6};
    tree[4] = {};
    tree[5] = {};
    tree[6] = {7, 8};
    tree[7] = {};
    tree[8] = {};

    dfs(tree, 1, -1);
    
    return 0;
}
