#include<iostream>

using namespace std;

int main(){

        int A,B;
        cin >> A >> B;
        int count = 0;
        while(A<=B){
            A = A*3;
            B = B*2;
            count++;
        }

        cout << count;


}
