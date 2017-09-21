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
	while(n>1){
		f*=n--;
	}
	return f;
}
