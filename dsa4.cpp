#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct node
{
	int i;
	char key[100];
};

int main(){

	int n;
	cin >> n;
	struct node map[100];
	//strcpy(map[0].key,"thousand");
	strcpy(map[1].key,"one");
	strcpy(map[2].key,"two");
	strcpy(map[3].key,"three");
	strcpy(map[4].key,"four");
	strcpy(map[5].key,"five");
	strcpy(map[6].key,"six");
	strcpy(map[7].key,"seven");
	strcpy(map[8].key,"eight");
	strcpy(map[9].key,"nine");
	strcpy(map[10].key,"ten");
	strcpy(map[11].key,"eleven");
	strcpy(map[12].key,"twelve");
	strcpy(map[13].key,"thirteen");
	strcpy(map[14].key,"fourteen");
	strcpy(map[15].key,"fifteen");
	strcpy(map[16].key,"sixteen");
	strcpy(map[17].key,"seventeen");
	strcpy(map[18].key,"eighteen");
	strcpy(map[19].key,"ninteen");
	strcpy(map[20].key,"twenty");
	strcpy(map[30].key,"thirty");
	strcpy(map[40].key,"fourty");
	strcpy(map[50].key,"fifty");
	strcpy(map[60].key,"sixty");
	strcpy(map[70].key,"seventy");
	strcpy(map[80].key,"eighty");
	strcpy(map[90].key,"ninty");

	int A[4]; for(int i=0;i<4;i++) A[i] = 0;
	int i=3;
	while(i>=0){
		A[i] = n%10;
		n = n/10;
		i--;
	}
	int k=0;
	if(A[0]!=0){
		 cout << map[A[0]].key << " " << "thousand" << " ";
		 k++;
	}
	if(A[1]!=0){
		cout << map[A[1]].key << " " << "hundread" ;
		k++;
	} 
	if(k!=0) cout << " "<<"and" << " ";

	if(A[2]>=2){
		cout << map[A[2]*10].key ;
		if(A[3]!=0) cout << " " << map[A[3]].key;
	}
	else{
		int a = A[2]*10 + A[3];
		cout << map[a].key << " ";
	}
	//for(int i=0;i<4;i++) cout << A[i];


	return 0;
}