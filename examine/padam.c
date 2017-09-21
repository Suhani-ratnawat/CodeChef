#include<stdio.h>
typedef unsigned long long ull;
ull *num_to_digits(ull);
int main(){
	//variable declaration
	//a - 1st digit, b - 2nd digit, adigits - pointer to digits of a, bdigits - pointer to digits of b, alength - length of a, blength - length of b, sum - matrix stores the multiplication results, result - array store the result, rtp - raisetopower
	ull p,q,a, b, *adigits, *bdigits, temp=0, ttemp, i, j, k, l, x, z, n, alength=0, blength=0, sum[100][100], result[1000], rtp, *r2;
	scanf("%lld %lld", &a, &b);
	//length and numtoDigits
	p=a;
	q=b;
	while(p){
	alength++;
	p=p/10;
	}
	while(q){
	blength++;
	q=q/10;}

	adigits = num_to_digits(a);
	bdigits = num_to_digits(b);
	printf("alen = %lld\nblen = %lld\n", alength, blength);
	for(i=0; i<alength; i++) {printf("%lld ", adigits[i]);printf("\n");}
	for(i=0; i<blength; i++) {printf("%lld ", bdigits[i]);printf("\n"); }
	//middle section
	k=0; n=alength*blength;
	for(i=blength-1; i>0; i--, k++){
		l=0;
		for(z=0; z<k; z++) {sum[k][l++]=0;
		rtp=0;
		for(j=alength-1; j>0; j--){

			temp = bdigits[i]*adigits[j] + rtp;

			if(!j && (temp > 9)){
				x=0;
				while(temp){
					sum[k][l++] = temp%10;
					temp/=10;
				}
				break;
			}
			if(j && (temp<10)){
				sum[k][l++] = temp;
				rtp=0;
			}else{
				r2 = num_to_digits(temp);
				sum[k][l++] = r2[1];
				rtp = r2[0];
			}
			}
		}
		for(;z<n; z++) sum[k][l++]=0;
		for(z=0; z<n/2; z++){
			temp = sum[k][z];
			sum[k][z] = sum[k][n-1-z];
			sum[k][n-1-z] = temp;
		}
	}

	z=n-1; rtp=0;
	for(i=n-1; i>0; i--){
		temp=0;
		for(j=0; j<blength; j++){
			temp+=sum[j][i]+rtp;
			rtp=0;
		}
		if(!i && (temp > 9)){
			x=0;
			while(temp){
				result[z--] = temp%10;
				temp/=10;
			}
			break;
		}
		if((temp<10)){
			result[z--] = temp;
			rtp=0;
		}else{
			r2 = num_to_digits(temp);
			result[z--] = r2[1];
			rtp = r2[0];
		}
	}
	i=0;
	while(!result[i++]) continue;
	i--; ttemp=0;
	while(i<n){
		printf("%lld", result[i]);
		ttemp=ttemp*10+result[i++];
	}
	//printf("\n\n");
	//printf("%lld\n%lld", ttemp, numlen(ttemp));
	return 0;

}

ull *num_to_digits(ull fnum){
	ull a[1000],i=0,x;
	x=fnum;
	while(x){
	i++;
	x=x/10;
	}
	while(fnum){
		a[--i] = fnum%10;
		fnum/=10;
	}
	return a;
}

/*ull numlen(ull fnum){
	ull i=1;
	while(fnum<10){
	 fnum=fnum/10;
	 i++; }
	 printf("\n%lld",i);
	return i;
}
 */
