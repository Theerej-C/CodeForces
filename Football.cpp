#include<iostream>
#include<bits/stdc++.h>
const int N = 0;

using namespace std;
int main(){

	string s;
	cin >> s;
	int zeroCount = 0;
	int oneCount = 0;
	int flag = 0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			zeroCount++;
			oneCount = 0;
		}
		if(s[i]=='1'){
			oneCount++;
			zeroCount=0;
		}
		if(zeroCount>=7||oneCount>=7){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}


}