#include <stdio.h>
#include <string.h>
char * encrypt(char * word, int len);
int main(){
	int t=1, i, j;
	char word[50]="SOAP";	
	//scanf("%d", &t);
	for(i = 0; i < t; i++){
		//scanf("%s", word);
		printf("Case #%d: %s\n", i+1, encrypt(word, strlen(word)));
	}
return 0;
}

char * encrypt(char * word, int len){
	int i, n1, n2;
	char eword[len+1];
	n1 = word[1];
	eword[0] = ((n1-65) % 26)+65;
	for(i = 1; i < len - 1; i++){
		n1 = word[i-1]; n2 = word[i+1];
		eword[i] = (((n1-65) + (n2-65)) % 26) + 65;
	}
	n1 = word[len - 2];
	eword[len - 1] = ((n1-65) % 26)+ 65;
	eword[len] = '\0';
	return eword;
}
