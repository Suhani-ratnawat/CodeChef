#include <iostream>
using namespace std;

int main(){
	freopen("in.txt", "r", stdin);
	int t;
	string s, r;
	cin >> t;
	while(t--){
		cin >> s;
		int j, k, b, len;
		char operators[len/2][len];
		b=k=0;len=s.length();
		for(int i=0; i<len; i++){
			if(s[i]=='('){
				b++; j=0;	
			} else if(s[i] >= 'a' && s[i] <= 'z'){
				r[k++] = s[i];
				cout << s[i];	
			} else if(s[i]==')'){
				for(int l=0; l<j; l++){
					r[k++] = operators[b][l];
					cout << operators[b][l];
				}
				b--;
			} else{
				operators[b][j++] = s[i];
			} 
		}
		r[k] = '\0';
		cout << endl;
	}
	return 0;
}

