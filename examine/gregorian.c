#include <stdio.h>
int main(){
	int n, d, r = 0, totalDays, day;
	scanf("%d", &n);
	d = n - 2001;
	r = d/4;
	totalDays = 365 * d + r % 4;
	day = totalDays % 7;
	//printf("d = %d, r = %d, totalDays = %d\n", d, r, totalDays); 
	printf("1st Jan of year %d is ", n);
	if(day == 0) printf("Monday.\n");
	else if(day == 1) printf("Tuesday.\n");
	else if(day == 2) printf("Wednesday.\n");
	else if(day == 3) printf("Thursday.\n");
	else if(day == 4) printf("Friday.\n");
	else if(day == 5) printf("Saturday.\n");
	else printf("Sunday.\n");
	return 0;
}
