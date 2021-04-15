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
	int a[n];
	int m = 0;
	for(int i = 1; i < n; i++){
		cin >> a[i];
		m ^= i;
		m ^= a[i];
	}
	m ^= n;
	cout << m;
  
  return 0;
}
