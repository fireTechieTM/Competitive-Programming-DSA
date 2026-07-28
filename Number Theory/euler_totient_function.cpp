//Time Complexity: O(loglogn)
//Space Complexity: O(loglogn)

int eulers_totient(int n) {
   //ensure that PRIME consists of the DISTINCT prime factorization of n
   vector<int> PRIME = //prime factorization of n;
   int totient = n;
   for(int p : PRIME) totient -= totient / p;
   return totient;
}
