#include<iostream>

const int N = 0;

using namespace std;
int main(){

	int N;
	cin >> N;
	if(N<=5){
		cout << 1;
	}
	else{
		int count = 0;
		while(N>5){
			N = N-5;
			count++;
		}
		cout << count+1;
	}

}