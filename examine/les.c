/*
161
10100001
3
1
6
8
*/

#include <stdio.h>
int main(){
	int i=0, j, a[20], t;
	scanf("%d", &t);	
	while(1){
		a[i++]=t%2; t/=2;
		if((t==0 || t==1) && (a[i++]=t)) break;
	} j=i;
	int b[j], k=1;
	for(i=0; i<j; i++) if(a[i]) b[k++]=i+1;
	b[0] = k-1;
	for(i=0; i<k; i++) printf("%d\n", b[i]);
	return 0;
}


