#include <iostream>
using namespace std;
int hcf(int, int);
int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n], min=999999, minG=999999, index=0, temp;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(min > a[i]){
				min = a[i]; index=i;	
			} 	
		} 
		for(int i=0; i<n; i++){
		//	if(index==i) continue;
			temp = hcf(min, a[i]); 
			cout << temp << endl;
			if(temp < minG) minG = temp; 
		}
		cout << minG << endl;
	}
	return 0;
}

int hcf(int a, int b){
	static int i=a, j=b;
	if(a < b){
		hcf(a+i, b);
	} else if(a > b){
		hcf(a, b+j);
	} else{
		return a;
	}
}
