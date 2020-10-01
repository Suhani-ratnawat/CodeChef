#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	unsigned long t, n;
	cin >> t;
	while(t--){
		cin >> n;
		unsigned long arr[n], r[n], psum, ssum, min=99999999999, index=0;
		for(unsigned long i=0; i<n; i++) cin >> arr[i];
		for(unsigned long i=0; i<n; i++){
			psum=ssum=0;
			for(unsigned long j=0; j<=i; j++){
				psum+=arr[j];
			}
			for(unsigned long j=i; j<n; j++){
				ssum+=arr[j];
			}
			if(min > (psum+ssum)){
				min = psum+ssum; index=i;
			}
		}
		cout << index+1 << endl;
		/* Alternate approach
		   cin>>t;
		   while(t--)
		   {
		   long long n,s=0,i,m=999999999,index=0;
		      cin>>n;
		      long long arr[n];
		      for(i=0;i<n;i++)
		      {
		         cin>>arr[i];
			 s = s +arr[i];
		      }
		   }
		   for(i=0;i<n;i++)
		   {
		       if((s+arr[i])>m)
		       {
		         m = s +arr[i];
			 index =i;
		       }
		   }
		   cout<<index<<endl;
		*/
		
	}
	return 0;
}

