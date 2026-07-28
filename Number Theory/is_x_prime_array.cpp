//Time Complexity: O(nloglogn)
//Space Complexity: O(n)

vector<bool> prime(int n) {
  vector<bool> a(n + 1, true); a[0] = a[1] = false;

   for(int i = 2; i <= n; i++) {
      if(a[i] == false) continue;

      for(int j = i + i; j <= n; j += i) {
          a[j] = false;
      }
  }

  return a;
}
