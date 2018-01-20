#include <iostream>
#include <stdio.h>
using namespace std;

int binarysearch_f(int A[],int x,int n){
	int low = 0; int high =n-1; int answer = -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(A[mid]==x){
			answer = mid;
			high = mid-1;
		}
		else if(A[mid]>x) high = mid-1;
		else low = mid+1;
	}
	return answer;
}
int binarysearch_l(int A[],int x,int n){
	int low = 0;int high = n-1;int answer = -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(A[mid]==x){
			answer = mid;
			low = mid + 1;
		}
		else if(A[mid]>x) high = mid - 1;
		else low = mid +1;
	}
	return answer;

}
int main(){
	int A[100];int n;int x;
	cin >> n >> x;
	for(int i=0;i<n;i++) cin >> A[i];
	int a = binarysearch_l(A,x,n);
	int b = binarysearch_f(A,x,n);

	cout << a-b+1;
}