#include<iostream>
#include<cctype>
const int N = 0;

using namespace std;
int main(){
	string s;
	cin >> s;
	s[0] = toupper(s[0]);
	cout << s;
}