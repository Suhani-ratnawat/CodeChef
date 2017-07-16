/*
Input			Output
2			Case #1: JOHNSON
3			Case #2: A AB C
ADAM
BOB
JOHNSON
2
A AB C
DEF
*/

#include <stdio.h>
int dal(char * name){
	int len = 0, i;
	int m[26];
	for(i=0; i<26; i++) m[i] = 0;
	for(i=0; name[i]!='\0'; i++) m[name[i]-64] = 1;
	for(i=0; i<26; i++) len += m[i];
return len;
}

char * finalString(int n, char *words[10]){
	int i, temp, max = dal(words[0]), index = 0;
	for(i = 1; i < n; i++){
		temp = dal(words[i]);
		if(temp > max){
			max = temp;
			index = i;
		}
		else if(temp == max && strcmp(words[index], words[i]) > 0){
			index = i;
		}
	}		
return words[index];
}

int main(){
	freopen("in.txt", "r", stdin);	
	int t, i, j,n;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &n);
		char words[10][n];
		for(j=0; j<n; j++){
			gets(words[j]);
			puts(words[j]);
		}
		//printf("Cas0e %d: %s\n", i, finalString(n, words));
	}
return 0;
}
