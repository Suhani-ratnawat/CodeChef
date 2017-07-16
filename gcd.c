#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
	return 0;
}

int gcd(int a, int b){
	if(!b) return a;
	else gcd(b, a%b);
}
