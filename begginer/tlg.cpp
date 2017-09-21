#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int n, score = 0, winner, ts, tp;
	cin >> n;
	int p1[n], p2[n];
	for(int i=0; i < n; i++){
		cin >> p1[i] >> p2[i];
		ts = p1[i] - p2[i];
		if(ts > 0){
			tp = 1;
		}else{
			ts*=-1; tp=2;
		}
		if(ts > score){
			score = ts;
			winner = tp;
		}	
	}
	cout << winner << " " << score << endl;
	return 0;	
}

