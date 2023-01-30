#include<iostream>

const int N = 0;

using namespace std;
int main(){

	string s;
	cin >> s;
	int count = 0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='4'||s[i]=='7'){
			count++;
		}
	}
	if(count==7||count==4){
		cout << "YES";
	}
	else{
		cout << "NO";
	}



}