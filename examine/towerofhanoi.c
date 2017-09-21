#include<stdio.h>
int toh(int, char, char, char);
int main(){
	int n, i;
	scanf("%d", &n);
	printf("\n%d\n", toh(n, 'A', 'C', 'B'));
	//for(i=0; i<n; i++) printf("%d ", fibbonacci(i));
	//printf("%d\n", factorial(n));
	return 0;
}

int toh(int n, char s, char d, char aux){
	static int count=0;
	count++;	
	if(n==1){
		printf("Move %d from %c to %c.\n", n, s, d);
		return count;
	}
	toh(n-1, s, aux, d);
	printf("Move %d from %c to %c.\n", n, s, d);
	toh(n-1, aux, d, s);
}

int fibbonacci(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fibbonacci(n-1) +  fibbonacci(n-2);
}

int factorial(int n){
	if(n==0 || n==1) return 1;
	else return n*factorial(n-1);
}
