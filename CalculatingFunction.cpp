#include<iostream>
#include<cmath>
const int N = 0;

using namespace std;
int main(){


	long N;
	cin >> N;
	int sum = 0;
	for(int i=1;i<=N;i++){
		if(i%2==1){
			sum = sum-i;
		}
		else{
			sum = sum+i;
		}
	}
	cout << sum;
	cout << floor(987/13);

}