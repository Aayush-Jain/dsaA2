#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n; cin >> n;
	int A[10]; int i=0;
	while(n>0){
		A[i] = n%10; n = n/10;
		i++;
	}
	for(int i=0;i<4;i++) cout << A[i];
}