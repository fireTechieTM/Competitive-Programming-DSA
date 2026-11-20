#include <iostream>
#include <vector>
using namespace std;

//Time Complexity: O(nm)
//Space Complexity: O(nm)

bool found = false;

using T = int;

bool valid_position(
int x, int y, T obstacle,
vector<vector<int>>& a,
vector<vector<bool>>& v
) {
    return x >= 0 && y >= 0 &&
           x < a[0].size() && y < a.size() &&
           a[y][x] != obstacle &&
           v[y][x] == false;
}

//environment and visited are 0-indexed
//ex - end x, ey - end y, a - environment, v - visited
void floodfill(
int x, int y, int ex, int ey, T obstacle,
vector<vector<int>>& a, 
vector<vector<bool>>& v, 
vector<int>& x_vector, 
vector<int>& y_vector
) {
   v[y][x] = true;

   //example node process
   cout << y << ' ' << x << '\n';
    
   if(found == true) return;

   if (x == ex && y == ey) {
       found = true;
       return;
   }
  
   for(int d = 0; d < x_vector.size(); d++) {
       int nx = x + x_vector[d];
       int ny = y + y_vector[d];
      
       if(valid_position(nx, ny, obstacle, a, v)) {
           floodfill(nx, ny, ex, ey, obstacle, a, v, x_vector, y_vector);
        }
   }
}


int main() {
    vector<int> x_vector = {0, 0, -1, 1};
    vector<int> y_vector = {-1, 1, 0, 0};

    int n = 8, m = 8;
    vector<vector<int>> environment(n, vector<int>(m));
    environment = 
    {
        {0, 1, 0, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0, 1, 0, 0},
        {0, 0, 0, 1, 0, 1, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}
    };

    vector<vector<bool>> visited(n, vector<bool>(m));
    floodfill(0, 0, 7, 7, 1, environment, visited, 
x_vector, y_vector);

    cout << (found ? "Found" : "Not Found");
    
    return 0;
}
