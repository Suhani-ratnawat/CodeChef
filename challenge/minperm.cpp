#include <iostream>
#include <list>

using namespace std;
bool contains(list <int>, int);
int main(){
	freopen("in.txt", "r", stdin);
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		list <int> :: iterator it;
		list <int> ll;
		//for(int i=1; i<=n; i++) ll.push_back(i);
		
		for(int i=0; i<n; i++){
			for(int j=0; ; j++){
				if(i==j) continue;
				else if(contains(ll, j+1)) continue;
				else{
					ll.push_back(j+1);
					break;
				}
			}
		}
		for(it = ll.begin(); it != ll.end(); ++it) cout << *it << " ";
		cout << endl;
	}
	return 0;
}

bool contains(list <int> ll, int n){
	list <int> :: iterator it;
	for(it = ll.begin(); it != ll.end(); ++it){
		if(*it==n) return true;
	} 
	return false;	
}
