#include <iostream>

using namespace std;
int reverse(int);

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n==reverse(n))
			cout << "wins" << endl;
		else
			cout << "losses" << endl;	
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
