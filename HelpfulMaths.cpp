#include<iostream>
#include<bits/stdc++.h>

const int N = 0;

using namespace std;
vector<string> seperate(string s, char c){
	vector<string> a;
	string temp = "";
	for(int i=0;i<=(int)s.size();i++){
		if(s[i]!=c){
			temp+=s[i];
		}
		else{
			a.push_back(temp);
			temp = "";
		}
	}
	a.push_back(temp);
	return a;
}

int main(){
	string s;
	cin >> s;
	vector<string> v = seperate(s,'+');
	for(string s:v){
		cout << s;
	}

}