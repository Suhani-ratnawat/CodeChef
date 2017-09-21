#include <iostream>
#include <math.h>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, a, b, max;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(a > b){
			max = a;
		}else{
			max = b;
		}
		cout << max << " " << a+b << endl;
	}
	return 0;
}

