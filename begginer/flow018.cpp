#include <iostream>

using namespace std;
int fact(int);

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << fact(n) << endl;	
	}
	return 0;
}

int fact(int n){
	int f=1;
	for(int i=2; i<=n; i++){
		f*=i;
	}
	return f;
}
