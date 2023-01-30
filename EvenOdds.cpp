#include<iostream>
#include<cmath>
const int N = 0;

using namespace std;
int main(){

	long long n,k;
	cin >> n >> k;
	long  mid = (long)n/2;
	if(n%2==1){
		mid++;
	}
	cout << mid << " " ;
	if(k<=mid){
		cout << (2*k)-1;
	}
	else{
		cout << (k-mid)*2;
	}

}