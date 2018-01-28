#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;


int multiply(int A[],int length,int number){
	int carry = 0;
	int product = 0;
	for(int i=0;i<length;i++){
		product = A[i]*number + carry; 
		A[i] = product%10;
		carry = product/10; 
	}
	while(carry>0){
		A[length] = carry%10;
		carry = carry/10;
		length++;
	}
	return length;
}
int into_array(int A[],int n){
	int i=0;
	while(n>0){
		A[i] = n%10;
		n = n/10;
		i++; 
	}
	return i;
}

int main(){
	long long int n;
	cin >> n;
	int A[100] ; 
	for(int i=0;i<100;i++) A[i] = 0;
	
	int l = into_array(A,n);
	int l_multiplied = multiply(A,l,n);
	
	if(l_multiplied%2==0){
		if(l%2==0){
			int mid = l_multiplied/2;
			for(int i=mid+l/2-1;i>=mid-l/2;i--) cout << A[i];
		}
		else{
			int mid = l_multiplied/2-1;
			for(int i=mid+l/2+1;i>=mid-l/2+1;i--) cout << A[i];
		}
	}
	else{
		if(l%2==0){
			int mid = (l_multiplied+1)/2;
			for(int i=mid+l/2-1;i>=mid-l/2;i--) cout << A[i];
		}
		else{
			int mid = l_multiplied/2;
			for(int i=mid+l/2;i>=mid-l/2;i--) cout << A[i];
		}
	}
	//cout << l << " " << l_multiplied;

	return 0;
}