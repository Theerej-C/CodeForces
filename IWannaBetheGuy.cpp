#include<bits/stdc++.h>

const int N = 0;

using namespace std;
int main(){

	int N;
	cin >> N;
	set<int> s;
	int a;
	cin >> a;
	for(int i=0;i<a;i++){
		int b;
		cin >> b;
		s.insert(b);
	}
	int c;
	cin >> c;
	for(int i=0;i<c;i++){
		int g;
		cin >> g;
		s.insert(g);
	}
	if(N==s.size()){
		cout << "I become the guy.";
	}
	else{
		cout << "Oh, my keyboard!";
	}
}