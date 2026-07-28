//Time Complexity: O(len(f)loglen(f))
//Space Complexity: O(len(f)loglen(f))

vector<vector<int>> successor_graph_binary_jump(vector<int>& f) {
   vector<vector<int>> jump(32, vector<int>(f.size() + 1, 0));
   jump[0] = f;

   //2^30 is the highest jump
   for(int i = 1; i <= 30; i++) {
       for(int j = 1; j <= f.size() - 1; j++) {
           jump[i][j] = jump[i - 1][jump[i - 1][j]];
       }
   }


   return jump;
}

//Time Complexity: O(logk)
//Space Complexity: O(1)
int find_successor(vector<vector<int>>& jump, int x, int k) {
   for(int i = 0; i <= 30; i++) {
       if((1 << i) & k) {
           x = jump[i][x];
       }
   }
   return x;
}
