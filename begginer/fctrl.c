#include <stdio.h>
#include <math.h>

unsigned fact(unsigned);

int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	scanf("%d", &t);
	while(t--){
	scanf("%d", &n);
		printf("%d\n", fact(n));	
	}
	return 0;
}

unsigned fact(unsigned n){
	unsigned i=1, t, sum = 0;
	while((t = pow(5, i++)) < n){
		sum += n/t;
	}
	return sum;
}
