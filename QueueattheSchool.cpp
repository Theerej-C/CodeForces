#include<iostream>
#include<string>
const int N = 0;

using namespace std;
int main(){


	int N,t;
	cin >> N >> t;
	string s1;
	cin >> s1;
	char* s = &s[0];
	int size = sizeof(s)/sizeof(s[0]);
	for(int i=0;i<size;i++){
		if(s[i]=='B'){
			for(int j=i+1;j<i+t;j++){
				if(s[j]=='G'){
					char temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
				cout<< s[i];
			}
		}
	}
	// string res(s);
	// cout << res;

}