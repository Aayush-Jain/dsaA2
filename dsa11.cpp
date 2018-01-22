#include <iostream>
#include <stdio.h>
using namespace std;

void swap(int A[],int i,int j){
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
int Partition(int A[],int p,int r){
	int i = p-1;
	int x = A[r];
	for(int j=p;j<r;j++){
		if(A[j]<x){
			i++;
			swap(A,i,j);
		}
	}
	swap(A,i+1,r);
	return i+1;
}
void Quicksort(int A[],int p,int r){
	if(p<r){
		int q = Partition(A,p,r);
		Quicksort(A,p,q-1);
		Quicksort(A,q+1,r); 
	}
}
int main(){
	int A[100] , B[100]; 
	int n ; cin >> n;
	for(int i=0;i<100;i++){
		A[i] = 0;
		B[i] = 0;
	}
	for(int i=0;i<n;i++){
		cin >> A[i];
		B[i] = A[i];
	}
	Quicksort(A,0,n-1);
	cout << "index" <<	"	" << "value" << endl;
	for(int i=0;i<n;i++){
		if(A[i]!=B[i]) cout << i  << '\n';
	}
	return 0;
}

