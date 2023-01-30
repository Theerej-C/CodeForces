#include<iostream>
#include<bits/stdc++.h>
const int N = 0;

using namespace std;

bool isUnique(int i){
	string s = to_string(i);
	set<int> uni(s.begin(),s.end());
	if(s.size()==uni.size()){
		return true;
	}
	return false;
}
int main(){

	int s;
	cin >> s;
	for(int i=s+1;i<=9500;i++){
		if(isUnique(i)){
			cout << i;
			break;
		}
	}


}

