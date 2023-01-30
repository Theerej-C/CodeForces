#include<iostream>

const int N = 0;

using namespace std;
int main(){

	int ar[5][5];
	int a;
	int b;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> ar[i][j];
			if(ar[i][j]==1){
				a=i;
				b=j;
			}
		}
		
	}
	int rMove = abs(2-a);
	int cMove = abs(2-b);
	cout << rMove + cMove;
}