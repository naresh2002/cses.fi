#include<bits/stdc++.h>
#define PB push_back
#define int long long
#define endl '\n'
const int MOD = (int)1e9 + 7;
const double PI = acos(-1.0);
using namespace std;


int32_t main () {
  int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		if((a+b) % 3 || 2 * min(a, b) < max(a,b)){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
		}
	}
  
  return 0;
}
