#include<iostream>

const int N = 0;

using namespace std;
int main(){
	int j = 1;
	for(int i=1;i<=5;i++){
		int lineCount = 0;
		while(lineCount<i){
			if(j%5==0){
				cout << "* ";
			}
			else{
			cout << j << " ";
		}
			j++;
			lineCount++;
		}
		cout << endl;
	
	}


}