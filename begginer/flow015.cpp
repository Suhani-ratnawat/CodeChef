#include <iostream>

using namespace std;
string theDay(int);

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << theDay(n) << endl; 
	}
	return 0;
}

string theDay(int n){
	int days = n-2001;
	string d[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
	days += days/4;
	int t = days%7;
	if (t >= 0) return d[t+1];
	else return d[t+7];
}
