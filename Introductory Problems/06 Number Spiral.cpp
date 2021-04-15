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
		int x, y;
		cin >> y >> x;
		int m = 0;
		if(x >= y){
			if(x % 2){
				m = x*x;
				m -= (y - 1);
			}
			else{
				m = (x-1)*(x-1) + 1;
				m += y - 1;
			}
		}
		else{
			if(y % 2){
				m = (y-1)*(y-1) + 1;
				m += x - 1;
			}
			else{
				m = y*y;
				m -= (x - 1);
			}
		}
		cout << m << endl;
	}
  
  return 0;
}
