#include<iostream>

const int N = 0;

using namespace std;
int display(int a,int b){
	return a+b;
}

int main(){
	
	int ar[6];
	for(int i=0;i<6;i++){
		ar[i] = i;
	}
	cout << sizeof(ar);
}