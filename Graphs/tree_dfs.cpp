//Time Complexity: O(V)
//Space Complexity: O(V)

void dfs(vector<vector<int>>& t, int c, int p) {
   // process node

   for(int u : t[c]) {
       if(u != p) {
           dfs(t, c, p);
       }
   }
}
