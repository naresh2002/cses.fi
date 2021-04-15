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
	int m = 5;
	int s = 0;
	while(m <= n){
		s += n/m;
		m *= 5;
	}
	cout << s;
  
  return 0;
}
