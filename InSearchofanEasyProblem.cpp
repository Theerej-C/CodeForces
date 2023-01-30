#include<iostream>

const int N = 0;

using namespace std;
int main(){

	int N,flag;
	cin >> N;
	flag = 0;
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		if(a==1){
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		cout << "EASY";
	}
	else{
		cout << "HARD";
	}

}