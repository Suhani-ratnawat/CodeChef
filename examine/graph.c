#include <stdio.h>
int *gv(int a[5][5], char x, char y);
int main(){

	int a[5][5] = {{0,0,1,0,0},{0,0,1,0,0},{1,1,0,1,1},{0,0,1,0,0},{0,0,1,0,0}};
	int i, j, n=5, *b;
	b=gv(a, 'b', 'a');
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", *((b+j)+2*i));
		}
		printf("\n");
	}
//	printf("%d\n", gv(a, 'b', 'a'));
	return 0;
}

int *gv(int a[5][5], char x, char y){
	
	int i, j, n=5, ix=x-97, iy=y-97;
	int b[5][5];	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[i][j];
		}
	}
		
	return *b;

}	
