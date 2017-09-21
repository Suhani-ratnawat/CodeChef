#include <iostream>
#include <math.h>

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
	int i=1, t, sum = 0;
	while((t = pow(5, i++)) < n){
		sum += n/t;
	}
	return sum;
}
