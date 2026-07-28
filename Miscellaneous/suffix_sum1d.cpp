//Time Complexity: O(len(a))
//Space Complexity: O(len(a))

vector<ll> suffix_sum(vector<ll> a) {
  for(int i = a.size() - 2; i >= 0; i--) {
      a[i] += a[i + 1];
  }
  return a;
}
