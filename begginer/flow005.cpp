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
	int at[] = {1, 2, 5, 10, 50, 100};
	int i=5, count=0;
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

