#include <iostream>
#include <stdio.h>
using namespace std;
void update(int color[8][8],int r,int c){    //updates the color[][] to 1 which represents that that block
	for(int i=0;i<8;i++){                    //can be attacked by some queen
		color[r][i] = 1;
		color[i][c] = 1;
	}
	int i1 = r,j1 = c;
	while(i1<8 && j1<8){
		color[i1][j1] = 1;
		i1++;j1++;
	}
	int i2 = r,j2 = c;
	while(i2>=0 && j2>=0){
		color[i2][j2] = 1;
		i2--;j2--;
	}
	int i3 = r,j3 = c;
	while(i3>=0 && j3<8){
		color[i3][j3] = 1; 
		i3--;j3++;
	}
	int i4 = r,j4 = c;
	while(i4<8 && j4>=0){
		color[i4][j4] = 1;
		i4++;j4--;
	}
	color[r][c] = 0;	
}	
void get_position(int A[8][8],int color[8][8]){      // to get the position of the queen
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(A[i][j]==1) update(color,i,j);
		}
	}
}
int main(){
	int A[8][8]; for(int i=0;i<8;i++) for(int j=0;j<8;j++) cin >> A[i][j];
	int color[8][8]; for(int i=0;i<8;i++) for(int j=0;j<8;j++) color[i][j] = 0;//0 means no queen or that place is not covered by any queen.
	get_position(A,color);
	cout << endl; int k=0;	
	for(int i=0;i<8;i++) {
		for(int j=0;j<8;j++){
			if(A[i][j]==1&&color[i][j]!=0){
				k++;
				break;
			}
		}
	}
	if(k!=0) cout << "NO";
	else cout <<"YES";
	/*for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cout << color[i][j] << " ";
		}
		cout << endl;
	}
	//cout << k;	*/																		
	return 0;
}                                                                               
