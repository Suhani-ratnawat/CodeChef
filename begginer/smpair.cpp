#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int list[n], temp;
		for(int i=0; i<n; i++){
			cin >> list[i];
		}
		for(int i=0; i<2; i++){
			for(int j=i+1; j<n; j++){
				if(list[i] > list[j]){
					temp = list[i];
					list[i] = list[j];	
					list[j] = temp;
				} 
			}
		}
		cout << list[0] + list[1] << endl;
	}
	return 0;
}

