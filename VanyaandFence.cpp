#include<iostream>

const int N = 0;

using namespace std;
int main(){

	int N,t;
	cin >> N >> t;
	int sum = 0;
	for(int i=0;i<N;i++){
		int per;
		cin >> per;
		if(per>t){
			sum+=2;
		}
		else{
			sum+=1;
		}
	}
	cout << sum;
}