#include<iostream>

const int N = 0;

using namespace std;
int main(){

	int N;
	cin >> N;
	string s;
	cin >> s;
	int acount=0,dcount=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'){
			acount++;
		}
		else if(s[i]=='D'){
			dcount++;
		}
	}
	if(acount>dcount){
		cout << "Anton";
	}
	else if(acount<dcount){
		cout << "Danik";
	}
	else{
		cout << "Friendship";
	}

}