#include<iostream>
#include<bits/stdc++.h>

const int N = 0;

using namespace std;
int main(){

	string s,r;
	cin >> s >> r;
	reverse(s.begin(),s.end());
	if(s.compare(r)==0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

}