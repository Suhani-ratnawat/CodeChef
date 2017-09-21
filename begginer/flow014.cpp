#include <iostream>

using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t, hardness, tensile, result;
	float carbon;
	bool t1, t2, t3; 
	cin >> t;
	while(t--){
		t1=t2=t3=false;
		result=5;
		cin >> hardness >> carbon >> tensile;
		if(hardness > 50) t1=true;
		if(carbon < 0.7) t2=true;
		if(tensile > 5600) t3=true;
		
		if(t1 && t2 && t3) result=10;
		else if(t1 && t2) result=9;
		else if(t2 && t3) result=8;
		else if(t1 && t3) result=7;
		else if(t1 || t2 || t3) result=6;
		cout << result << endl;
	}
	return 0;
}

