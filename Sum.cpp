#include<iostream>

const int N = 0;

using namespace std;
int main(){


	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(a+b==c||b+c==a||c+a==b){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

}