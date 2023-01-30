#include<bits/stdc++.h>

const int N = 0;

using namespace std;
int main(){

	unordered_set<int> hs;
	for(int i=0;i<4;i++){
		int a;
		cin >> a;
		hs.insert(a);
	}
	cout << 4-hs.size();
}