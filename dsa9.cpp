#include <iostream>
#include <stdio.h>
using namespace std;
// this code has to be revised its not working for n>10^8; 
bool f1(long long int n){
	int a=0;
	while(n>0){
		int d = n%10;
		if(d==0||d==2||d==3||d==4||d==5||d==6||d==8){
			a++;
			break;
		}
		n = n/10;
	}
	if(a==0) return true;
	else return false;
}

int main(){
	int n;
	cin >> n;int count =0;
	for(int i=1;i<=n;i++){
		int a = i%10;
		if(a==1||a==7||a==9){
			if(f1(i/10)) count=count+1;
		}
	}
	cout << count;
}
