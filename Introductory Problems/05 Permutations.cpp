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
	if(n == 1){
		cout << 1;
	}
	else if(n == 2 || n == 3){
		cout << "NO SOLUTION";
	}
	else{
		for(int i = n/2; i > 0; i--){
			cout << i << " " << n/2 + i << " ";
		}
		if(n % 2){
			cout << n;
		}
	}
  
  return 0;
}
