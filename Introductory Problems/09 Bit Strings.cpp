#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;

int modpow(int a, int b, int mod){
  int res = 1;
  a %= mod;
  while(b > 0){
    if(b&1)
      res = (res*a)%mod;
    a = (a*a)%mod;
    b >>= 1;
  }
  return res;
}

int32_t main () {
  int n;
	cin >> n;
	int m = modpow(2, n, MOD);
	cout << m;
  
  return 0;
}
