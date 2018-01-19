#include <iostream>
#include <stdio.h>
using namespace std;

int add(int a){      // function to add digits of a 
	int sum = 0;     // if any number is >= 10.
	while(a>0){
		sum = sum+a%10;
		a = a/10;
	}
	return sum;
}

int main(){
	long long int n; cin >>n;
	int A[100]; for(int i=0;i<100;i++) A[i] = 0;
	int i=0;
	while(n>0){
		A[i] = n%10;
		n = n/10; i++;
	}
	int key = A[0];
	for(int j=1;j<i;j++){
		if(j%2==1){
			A[j] = A[j]*2;
			if(A[j]>9) A[j] = add(A[j]);
		}
	}
	int sum = 0;
	for(int j=1;j<i;j++){
		sum = sum + A[j];
	}
	sum = sum + key;
	if(sum%10==0) cout << "valid";
	else cout << "not valid";
}