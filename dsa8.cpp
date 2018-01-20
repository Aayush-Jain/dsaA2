#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int primefac(int n){
	int count = 0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n=n/i;
			count++;
		}
	}
	if(n!=1) count ++;
	return count ;
}

int main(){
	int n; cin >> n;
	int answer = primefac(n);
	cout << answer;
	return 0;
}