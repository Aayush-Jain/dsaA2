#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	  int **A = (int **)malloc(n * sizeof(int *));
    for (int i=0; i<n; i++)
         A[i] = (int *)malloc(n * sizeof(int));

    for(int i=0;i<n;i++) for(int j=0;j<n;j++) A[i][j] = 0;
	
	int i1 = 0,i2 = n-1,j1 = 0,j2 = n-1;
	int count =1;
	
	while(count <= n*n){
		if(j1<j2 && count <= n*n){
			for(int j=j1;j<=j2;j++){
				A[i1][j] = count;
				count++;
			}
			i1++;
		}
		


		if(i1<i2 && count <= n*n){
			for(int i=i1;i<=i2;i++){
				A[i][j2] = count;
				count++;
			}
			j2--;	
		}
		


		if(j2>j1 && count <= n*n){
			for(int j=j2;j>=j1;j--){
				A[i2][j] = count;
				count++;
			}
			i2--;
		}
		

		if(i2>i1 && count <= n*n){
			for(int i=i2;i>=i1;i--){
				A[i][j1] = count;
				count++;
			}
			j1++;
		}
		
		
	}
	

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << A[i][j] << "	";
		}
		cout << endl;
	}
	return 0;
}