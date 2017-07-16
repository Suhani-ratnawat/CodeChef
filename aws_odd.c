#include <stdio.h>
int odd(int);
int main(){
int N;
scanf("%d", &N);
printf("%d\n", odd(N)); //5,3//6,5//7,7
return 0;
}

int odd(int N){
int i, count = N, boo = 0, a[N]; 
for(i = 0; i < N; i++) a[i] = i+1;
i=0;
while(count > 1){
	if(i >= N) i = 0;
	if(a[i] == 0){
		i++;
	}else{
		if(boo){
			a[i] = 0;
			count--;
		}else{
			i++;
		}
		boo = !boo;
	}
}
for(i=0; a[i]==0; i++);
return a[i];
}
