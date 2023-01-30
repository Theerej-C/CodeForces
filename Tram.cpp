#include<iostream>
#include<algorithm>
const int N = 0;

using namespace std;
int main(){

	int N;
	cin >> N;
	int maxi = 0;
	int currPass = 0;
	while(N>0){
		int out,in;
		cin >> out >> in;
		currPass-=out;
		currPass+=in;
		maxi = max(maxi,currPass);
		N--;
	}
	cout << maxi;


}