#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, a, b, c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		if(a && b && c && a+b+c == 180)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

