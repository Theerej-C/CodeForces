#include<iostream>

const int N = 0;

using namespace std;
int main(){

	int N,x;
	cin >> N >> x;
	while(x>0){
		if(N%10!=0){
			N=N-1;
		}
		else{
			N=N/10;
		}
		x--;
	}
	cout << N;
}