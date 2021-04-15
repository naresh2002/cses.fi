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
	if(n % 4 == 0 || (n+1) % 4 == 0){
		cout << "YES\n";
		if(n % 2 == 0){
			cout << n/2 << endl;
			for(int i = 1; i <= n/4; i++){
				printf("%d %d ", i, n-i+1);
			}
			cout << endl << n/2 << endl;
			for(int i = n/4+1; i <= n/2; i++){
				printf("%d %d ", i, n-i+1);
			}
		}
		else{
			int m = (n-3)/4;
			vector<int> v1, v2;
			int i;
			for(i = 4; i <= n; i++){
				if(i % 2 == 0){
					v1.PB(i);
				}
				else{
					v2.PB(i);
				}
				if((int)v2.size() == m){
					break;
				}
			}
			for(i++; i <= n; i++){
				if(i % 2){
					v1.PB(i);
				}
				else{
					v2.PB(i);
				}
			}
			v1.PB(1);
			v1.PB(2);
			v2.PB(3);
			cout << (n+1) / 2 << endl;
			for(auto x : v1){
				printf("%d ", x);
			}
			cout << endl << n / 2 << endl;
			for(auto x : v2){
				printf("%d ", x);
			}
		}
	}
	else{
		cout << "NO";
	}
  
  return 0;
}
