#include <iostream>
#include <iomanip>

int main(){
	freopen("in.txt", "r", stdin);
	int t, quantity;
	double price;
	std::cin >> t;
	while(t--){
		std::cin >> price >> quantity;
		if(price > 1000) price*=0.9;
		std::cout << std::fixed << std::setprecision(6) << price*quantity << std::endl;
	}
	return 0;
}

