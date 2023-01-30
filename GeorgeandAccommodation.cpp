#include<iostream>

const int N = 0;

using namespace std;
int main(){

	int N;
	cin >> N;
	int count = 0;
	for(int i=0;i<N;i++){
		int a,b;
		cin >> a >> b;
		if(b-a>=2){
			count++;
		}
	}
	cout << count;

}