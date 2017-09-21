#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t;
	char ch;
	cin >> t;
	while(t--){
		cin >> ch;
		switch(ch){
			case 'B':
			case 'b':
				cout << "BattleShip" << endl;
				break;
			case 'C':
			case 'c':
				cout << "Cruiser" << endl;
				break;
			case 'D':
			case 'd':
				cout << "Destroyer" << endl;
				break;
			case 'F':
			case 'f':
				cout << "Frigate" << endl;
				break;
			default:
				cout << "invalid" << endl;
		}	
	}
	return 0;
}

