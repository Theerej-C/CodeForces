#include<iostream>

const int N = 0;

using namespace std;
int main(){

	string s,r;
	cin >> s >> r;
	for(int i=0;i<s.size();i++){
		if(s[i]!=r[i]){
			cout << 1;
		}
		else{
			cout << 0;
		}
	}


}