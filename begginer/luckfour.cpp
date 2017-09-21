#include <iostream>
using namespace std;
int luckfour(unsigned);
int main(){
	freopen("in.txt", "r", stdin);
	unsigned t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << luckfour(n) << endl;
	}
	return 0;
}


int luckfour(unsigned n){
	int count=0;
	while(n){
		if(n%10==4) count++;
		n/=10;
	}
	return count;
}
