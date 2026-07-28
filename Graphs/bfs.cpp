//Time Complexity: O(V + E)
//Space Complexity: O(V + E)

void bfs(int a, vector<vector<int>>& g, vector<bool>& v) {
   queue<int> q;
   q.push(a);
   v[a] = true;
  
   while(!q.empty()) {
       int c = q.front();
       q.pop();
       //process node
      
       for(int u : g[c]) {
           if(v[u] == false) {
              v[u] = true;
              q.push(u);
           }
       }
   }
  
   return -1;
}
