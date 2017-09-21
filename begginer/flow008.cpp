#include <iostream>

using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n < 10)
			cout << "What an obedient servant you are!" << endl;
		else 
			cout << -1 << endl;	
	}
	return 0;
}

