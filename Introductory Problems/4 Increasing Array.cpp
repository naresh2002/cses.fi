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
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int m = 0;
	for(int i = 1; i < n; i++){
		if(a[i-1] > a[i]){
			m += a[i-1] - a[i];
			a[i] = a[i-1];
		}
	}
	cout << m;
  
  return 0;
}
