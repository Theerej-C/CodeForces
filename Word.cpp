#include<iostream>
#include<cctype>
#include<cstring>
#include<algorithm>
const int N = 0;

using namespace std;
int main(){
	string s;
	cin >> s;
	int cap_count = 0;
	int small_count = 0;
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])){
			cap_count++;
		}
		else{
			small_count++;
		}
	}

	if(cap_count>small_count){
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	else if(cap_count<=small_count){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	cout << s;
}