#include <iostream>
using namespace std;
bool even(int);

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n], c;
		bool flag=true;
		for(int i=0; i<n; i++) cin >> a[i];
		if(even(n)) c=n/2; else c=(n/2)+1;
		for(int i=0; i<=(n/2); i++){
			if(a[i]!=a[n-i-1] || a[i] > c){
				flag=false; break;
			}
		}
		if(flag) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}

bool even(int n){
	if(n%2) return false;
	return true;
}
