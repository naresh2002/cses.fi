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
	int a[26];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++){
		a[s[i] - 'A']++;
	}
	int cnt = 0;
	for(int i = 0; i < 26; i++){
		if(a[i]){
			cnt++;
		}
	}
	int m = 0;
	for(int i = 0; i < 26; i++){
		if(a[i] % 2){
			m++;
		}
	}
	if(m > 1){
		cout << "NO SOLUTION";
	}
	else{
		for(int i = 0; i < 26; i++){
			for(int j = 0; j < a[i]/2; j++){
				cout << char('A' + i);
			}
		}
		if(m){
			for(int i = 0; i < 26; i++){
				if(a[i] % 2 || a[i] == 1){
					cout << char(i + 'A');
				}
			}
		}
		for(int i = 25; i >= 0; i--){
			for(int j = 0; j < a[i]/2; j++){
				cout << char('A' + i);
			}
		}
	}
  
  return 0;
}
