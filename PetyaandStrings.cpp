#include<iostream>
#include<bits/stdc++.h>
const int N = 0;

using namespace std;
int main(){

	string s,s1;
	cin >> s >> s1;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	if(s.compare(s1)==0){
		cout << 0;
	}
	else if(s.compare(s1)<0){
		cout << -1;
	}
	else{
		cout << +1;
	}

}