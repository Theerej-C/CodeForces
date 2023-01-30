#include<iostream>

const int N = 0;

using namespace std;
int main(){
	int N;
	int x = 0;
	cin >> N;
	string ar[N];
	for(int i=0;i<N;i++){
		cin >> ar[i]; 
	}
	for(int i=0;i<N;i++){
		if(ar[i][0]=='+'&&ar[i][1]=='+'){
			++x;
		}
		else if(ar[i][1]=='+'&&ar[i][2]=='+'){
			x++;
		}
		else if(ar[i][0]=='-'&&ar[i][1]=='-'){
			--x;
		}
		else if(ar[i][1]=='-'&&ar[i][2]=='-'){
			x--;
		}
	}
cout << x;

}