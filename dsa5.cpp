#include <iostream>
#include <stdio.h>
using namespace std;

int number_nonzero(int A[6][6]){
	int count = 0;
	for(int i=0;i<6;i++) for(int j=0;j<6;j++) if(A[i][j]!=0) count++;
	return count;
}
int main(){
	int A[6][6];
	for(int i=0;i<6;i++) for(int j=0;j<6;j++) A[i][j] = 0;
	for(int i=0;i<6;i++) for(int j=0;j<6;j++) cin >> A[i][j];
	int count = number_nonzero(A);
	if(count < 10){
		cout << "row" <<"	" << "colomn" <<"	"<<"value" <<endl;
		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
				if(A[j][i]!=0){
					cout << i <<"	"<< j <<"	" << A[j][i] <<endl;
				}
			}
		}
	}
	return 0;
}