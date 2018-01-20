#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int different_digits(long long int n){
	int A[10]; for(int i=0;i<10;i++) A[i] = 0;
	while (n>0){
		A[n%10]++;
		n = n / 10;
	}
	int count = 0;
	for(int i=0;i<10;i++) if(A[i]!=0) count++;
	return count;
}
int smallest(int n, int k){
	int number = pow(10,n-1);
	while(different_digits(number)<k){
		number++;
	}
	return number;
}
int largest(int n,int k){
	int number = pow(10,n)-1;
	while(different_digits(number)<k){
		number--;
	}
	return number;
}
int main(){
	int n,k;
	cin >> n >> k;
	int s = smallest(n,k);int l = largest(n,k);
	cout << s << " " << l;
}