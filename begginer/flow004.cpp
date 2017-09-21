#include <iostream>

using namespace std;
int reverse(int);

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << n%10+reverse(n)%10 << endl;	
	}
	return 0;
}

int reverse(int n){
	int sum = 0;
	while(n){
		sum = sum*10 + n%10;
		n/=10;
	}
	return sum;
}
