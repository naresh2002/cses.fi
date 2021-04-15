#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;
 
 
int32_t main () {
  int n;
  cin >> n;
  
  for (int k = 1; k <= n; k++) {
    int tot = k * k * ((k * k) - 1) / 2;
    int not_allowed = 2 * (2 * (k - 1) * (k - 2));
    cout << tot - not_allowed << endl;
  }
  
  return 0;
}
