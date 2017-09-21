#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, a, b, c, e;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		if(a > b && a > c){
			if(b > c) e = b;
			else e = c;
		} else if(b > a && b > c){
			if(a > c) e = a;
			else e = c;
		} else {
			if(a > b) e = a;
			else e = b;
		}
		cout << e << endl;
	}
	return 0;
}

