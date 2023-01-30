#include<bits/stdc++.h>

const int N = 0;

using namespace std;
int main(){

	int N;
	cin >> N;
	int ar[N];
	cin >> ar[0];
	int min = ar[0];
	int max = ar[0];
	int indexmax=0,indexmin=0;
	for(int i=1;i<N;i++){
		cin >> ar[i]; 
		if(ar[i]<=min){
			min = ar[i];
			indexmin = i; 
		}
		if(ar[i]>max){
			max = ar[i];
			indexmax = i;
		}
		}

		int out;
		if(N%2==0){
			out=(indexmax)+(N-indexmin)-1;
		}
		else{
			out = (indexmax-1)+(N-indexmin)-1;
		}

		cout << out;
	
}