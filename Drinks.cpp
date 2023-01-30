#include<iostream>

const int N = 0;

using namespace std;
int main(){

	int N;
	cin >> N;
	float sum = 0.0;
	for(int i=0;i<N;i++){
		float a;
		cin >> a;
		sum+=a;
	}

	cout << sum/N;


}