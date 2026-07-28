//Time Complexity: O(a.size()*a[0].size())
//Space Complexity: O(a.size()*a[0].size())

bool found = false;
void floodfill(
int x, int y, int ex, int ey, 
vector<vector<int>>& a, vector<vector<int>>& v, 
vector<int>& x_vector, vector<int>& y_vector) {
   if(found == true) return;
   if (x == ex && y == ey) {
       found = true;
       return;
   }
  
   for(int d = 0; d < 4; d++) {
       int nx = x + x_vector[d];
       int ny = y + y_vector[d];
      
       if(nx >= 0 && ny >= 0 &&
           nx < a[0].size() && ny < a.size() &&
           a[ny][nx] != OBSTACLE &&
           v[ny][nx] == false) {
              floodfill(nx, ny, ex, ey, a, v, x_vector, y_vector);
           }
   }
}
