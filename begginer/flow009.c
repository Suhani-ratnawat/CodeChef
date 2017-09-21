#include <stdio.h>

int main(){
	freopen("in.txt", "r", stdin);
	int t, quantity;
	double price;
	scanf("%d", &t);
	while(t--){
		scanf("%f %d", &price, &quantity);
		if(price > 1000) price*=0.9;
		printf("%f\n", price*quantity);
	}
	return 0;
}

