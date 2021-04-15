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
	while (n > 1) {
		cout << n << " ";
		if (n % 2) {
			n *= 3;
			++n;
		}
		else{
			n /= 2;
		}
	}
	cout << 1;
  
  return 0;
}
