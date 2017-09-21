#include<stdio.h>
#include<string.h>

int checkForPass(char *line){
	int len = strlen(line);	
	len--;
	char a[5] ;
	a[4] = '\0';
	int in = 3 , count = 0;
	while(1){
		if(line[len] == ' ')
			break;
		if(line[len] >= 'A' && line[len] <= 'Z'){
			a[in] = line[len];
			in--;
		}
		len--;
	}
	

	if(strcmp(a , "PASS")==0)
		return 1;
	else
		return 0;
}

int checkFor2012(char *line){
	int len = strlen(line);
	len--;
	char a[5] ;
	a[4] = '\0';
	int in = 3 , count = 0;
	while(1){
		if(line[len] == ' ')
			count++;
		if(count == 2)
			break;

		if(count == 1 && line[len]!=' '){
			a[in] = line[len];
			in--;
		}
			
		len--;
	}
	
		
	if(strcmp(a , "2012")==0)
		return 1;
	else
		return 0;
}

int main(){
	
	FILE *file = fopen("result.txt" , "r");
	FILE *file2 = fopen("pass.txt" , "w");
	FILE *file3 = fopen("2012.txt" , "w");
	
	
	char line[1000];
	int firstLine = 1;
	int i = 0;
	while(fgets(line , sizeof(line) , file)){
		if(firstLine){
			fputs(line , file2);
			fputs(line , file3);
			firstLine = 0;
		}
		if(!firstLine){
			if(checkForPass(line)){
				fputs(line , file2);	
			}
			if(checkFor2012(line)){
				fputs(line , file3);
			}
		}
		
	}
	
	fclose(file);
	return 0;
}
