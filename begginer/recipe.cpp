#include <iostream>
using namespace std;
long gcd(long, long);

int main(){
	freopen("in.txt", "r", stdin);
	long t, n;
	cin >> t;
	while(t--){
		cin >> n;
		long arr[n], r;
		for(long i=0; i<n; i++){
			cin >> arr[i];
			if(!i){
				r = arr[0];
			} else{
				r = gcd(r, arr[i]);
			}	
		} 
		for(long i=0; i<n; i++){
			cout << arr[i]/r << " ";	
		}
		cout << endl;
	}
	return 0;
}

long gcd(long a, long b){
	if(b) gcd(b, a%b);	
	else return a;
}

