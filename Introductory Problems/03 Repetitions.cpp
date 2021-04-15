#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  string s;
	cin >> s;
	int n = s.size();
	int a[n];
	a[0] = 1;
	int m = 1;
	for(int i = 1; i < n; i++){
		if(s[i] == s[i-1]){
			a[i] = a[i-1] + 1;
		}
		else{
			a[i] = 1;
		}
		m = max(m, a[i]);
	}
	cout << m;
  
  return 0;
}
