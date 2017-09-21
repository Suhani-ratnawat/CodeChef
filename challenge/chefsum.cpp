#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	unsigned long t, n;
	cin >> t;
	while(t--){
		cin >> n;
		unsigned long arr[n], r[n], psum, ssum, min=99999999999, index=0;
		for(unsigned long i=0; i<n; i++) cin >> arr[i];
		for(unsigned long i=0; i<n; i++){
			psum=ssum=0;
			for(unsigned long j=0; j<=i; j++){
				psum+=arr[j];
			}
			for(unsigned long j=i; j<n; j++){
				ssum+=arr[j];
			}
			if(min > (psum+ssum)){
				min = psum+ssum; index=i;
			}
		}
		cout << index+1 << endl;
		
	}
	return 0;
}

