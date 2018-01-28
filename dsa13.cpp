#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void find_closest(int A[],int B[],int C[],int p,int q,int r){
	int res_i=0,res_j=0,res_k=0;
	int diff = 100000;
	int i=0,j=0,k=0;
	while(i<p && j<q && k<r){
		int minimum = min(A[i],min(B[j],C[k]));
		int maximum = max(A[i],max(B[j],C[k]));

		if(maximum-minimum<diff){
			diff = maximum-minimum;
			res_i = i;res_j = j;res_k = k;
		}
		if(diff==0) break;
		if(A[i]==minimum) i++;
		else if(B[j]==minimum) j++;
		else k++;
	}
	cout << A[res_i] << " " << B[res_j] << " " << C[res_k];
}
int main(){
	int A[] = {1,4,10},B[] = {2,15,20},C[] = {10,12};
	find_closest(A,B,C,3,3,2);
}