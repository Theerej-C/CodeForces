#include<iostream>

const int N = 0;

using namespace std;
int main(){
	int n,x;
	cin >> n;
	cin >> x;
	int ar[n];
	for(int i=0;i<n;i++){
		cin >> ar[i];
	}

	int count = 0;
	for(int i=0;i<x;i++){
		if(ar[i]>0){
		count++;
	}
	}

	for(int i=x;i<n;i++){
		if(ar[i]==ar[x-1] && ar[i]!=0){
			count++;
		}
	}
	cout << count;
	
}

