#include <iostream>
using namespace std;
long gcd(long, long);

int main(){
	freopen("in.txt", "r", stdin);
	long t, a, b, c;
	cin >> t;
	while(t--){
		cin >> a >> b;
		c = gcd(a, b);
		cout << c << " " << (a*b)/c << endl;
	}
	return 0;
}

long gcd(long a, long b){
	if(b) gcd(b, a%b);	
	else return a;
}

