#include <iostream>
using namespace std;
struct map {
	char key;
	bool availabilty;
}s[26];

void set(char);

int main(){
	freopen("in.txt", "r", stdin);
	int t, a[26];
	string word;
	cin >> t;
	for(int i=0; i<26; i++){
		s[i].key = 'a'+ i;
	}
	while(t--){
		int sum=0;
		for(int i=0; i<26; i++){
			cin >> a[i];
			s[i].availabilty = false;
		}
		cin >> word;
		for(int i=0; i<word.length(); i++){
			set(word[i]);
		}
		for(int i=0; i<26; i++){
			if(!s[i].availabilty) sum+=a[i];
		}
		cout << sum << endl;
	}
	return 0;
}

void set(char c){
	for(int i=0; i<26; i++){
		if(s[i].key==c){
			s[i].availabilty = true; return;
		}
	}	
}
