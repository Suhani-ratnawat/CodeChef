#include <iostream>
using namespace std;
int two(int);

int main(){
	freopen("in.txt", "r", stdin);
	int t, a;
	cin >> t;
	while(t--){
		cin >> a;
		cout << two(a) << endl;
	}
	return 0;
}

int two(int n){
	int at[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
	int i=11, count=0;
	while(n){
		if(n>=at[i]){
			count+=n/at[i];
			n%=at[i];
		} else{
			i--;
		}
	}
	return count;
}

