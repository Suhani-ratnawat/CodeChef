#include <iostream>
#include <math.h>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << (int)sqrt(n) << endl;
	}
	return 0;
}

