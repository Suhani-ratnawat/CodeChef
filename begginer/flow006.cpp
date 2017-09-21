#include <iostream>
using namespace std;
int sod(int);

int main(){
	freopen("in.txt", "r", stdin);
	int t, a;
	cin >> t;
	while(t--){
		cin >> a;
		cout << sod(a) << endl;
	}
	return 0;
}

int sod(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

