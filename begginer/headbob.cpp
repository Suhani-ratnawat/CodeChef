#include <iostream>

using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	char ch;
	cin >> t;
	while(t--){
		cin >> n;
		int b=3;
		for(int i=0; i<n; i++){
			cin >> ch;
			if(ch=='I') b=1;
			if(ch=='Y') b=2;
		}
		if(b==1){
			cout << "INDIAN" << endl;
		} else if(b==2){
			cout << "NOT INDIAN" << endl;
		} else {
			cout << "NOT SURE" << endl;
		} 
	}
	return 0;
}

