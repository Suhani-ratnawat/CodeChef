#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int n;
	while(cin >> n && n){
		int a[n], amb=1;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n-1; i++){
			if(a[i]==n){
					if(i==n-1){
						if(a[0]==1) amb=2;
						else amb=1;
					}else{
						if(a[i+1]==1) amb=2;
						else amb=1;	
					}
			}else{
				if(a[i+1]==a[i]+1) amb=2;
				else amb=1;
			}
		}
		if(amb==1) cout << "ambiguous" << endl;
		else cout << "not ambiguous" << endl;
	}
	return 0;
}

