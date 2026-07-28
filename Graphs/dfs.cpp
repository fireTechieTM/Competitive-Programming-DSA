//Time Complexity: O(V + E)
//Space Complexity: O(V)

void dfs(vector<vector<int>>& g, vector<bool>& s, int v) {
   s[v] = true;
   // process node

   for(int u : g[v]) {
       if(s[v] == false) {
           dfs(g, s, u);
       }
   }
}
