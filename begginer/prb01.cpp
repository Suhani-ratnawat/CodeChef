#include <iostream>
#include <math.h>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		bool test = true;
		for(int i=2; i<sqrt(n); i++){
			if(n%i==0){
				test = false; break;
			}
		}
		if(test){
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}

