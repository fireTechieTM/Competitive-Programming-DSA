//Time Complexity: O(sqrt(x))
//Space Complexity: O(1)

vector<int> prime_factorization(ll x) {
   vector<int> a;

   for(int i = 2; i*i <= x; i++) {
       while(x % i == 0) {
           a.push_back(i);
           x /= i;
       }
   }
   if(x > 1) a.push_back(x);

   return a;
}
