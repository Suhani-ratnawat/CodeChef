#include <iostream>

using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t;
	cin >> t;
	int basicSalary;
	float hra, da, grossSalary;
	while(t--){
		cin >> basicSalary;
		if(basicSalary < 1500) grossSalary = basicSalary + 0.1*basicSalary + 0.90*basicSalary;
		else grossSalary = basicSalary + 500 + 0.98*basicSalary;
		cout << grossSalary << endl;
	}
	return 0;
}

