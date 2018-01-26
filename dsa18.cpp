#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct dict{
	char c;
	char key[100];
};
int findchar(char a,dict map[100]){
	for(int i=1;i<=37;i++){
		if(a==map[i].c){
			return i;
			break;
		}
	}
}
int main(){
	char str[1000];
	scanf("%[^\n]%*c",str);
	int l = strlen(str);
	struct dict map[100];
	
	map[1].c = 'a'; strcpy(map[1].key,"2");
	map[2].c = 'b'; strcpy(map[2].key,"22");
	map[3].c = 'c'; strcpy(map[3].key,"222");
	map[4].c = 'd'; strcpy(map[4].key,"3");
	map[5].c = 'e'; strcpy(map[5].key,"33");
	map[6].c = 'f'; strcpy(map[6].key,"333");
	map[7].c = 'g'; strcpy(map[7].key,"4");
	map[8].c = 'h'; strcpy(map[8].key,"44");
	map[9].c = 'i'; strcpy(map[9].key,"444");
	map[10].c = 'j'; strcpy(map[10].key,"5");
	map[11].c = 'k'; strcpy(map[11].key,"55");
	map[12].c = 'l'; strcpy(map[12].key,"555");
	map[13].c = 'm'; strcpy(map[13].key,"6");
	map[14].c = 'n'; strcpy(map[14].key,"66");
	map[15].c = 'o'; strcpy(map[15].key,"666");
	map[16].c = 'p'; strcpy(map[16].key,"7");
	map[17].c = 'q'; strcpy(map[17].key,"77");
	map[18].c = 'r'; strcpy(map[18].key,"777");
	map[19].c = 's'; strcpy(map[19].key,"7777");
	map[20].c = 't'; strcpy(map[20].key,"8");
	map[21].c = 'u'; strcpy(map[21].key,"88");
	map[22].c = 'v'; strcpy(map[22].key,"888");
	map[23].c = 'w'; strcpy(map[23].key,"9");
	map[24].c = 'x'; strcpy(map[24].key,"99");
	map[25].c = 'y'; strcpy(map[25].key,"999");
	map[26].c = 'z'; strcpy(map[26].key,"9999");
	map[27].c = '0'; strcpy(map[27].key,"00");
	map[28].c = '1'; strcpy(map[28].key,"11");
	map[29].c = '2'; strcpy(map[29].key,"2222");
	map[30].c = '3'; strcpy(map[30].key,"3333");
	map[31].c = '4'; strcpy(map[31].key,"4444");
	map[32].c = '5'; strcpy(map[32].key,"5555");
	map[33].c = '6'; strcpy(map[33].key,"6666");
	map[34].c = '7'; strcpy(map[34].key,"77777");
	map[35].c = '8'; strcpy(map[35].key,"8888");
	map[36].c = '9'; strcpy(map[36].key,"99999");
	map[37].c = ' '; strcpy(map[37].key,"0");
	//map[38].c = ''; map[38].key = ;*/
	for(int i=0;i<l;i++){
		int a = findchar(str[i],map);
		cout << map[a].key;
	}
	return 0;
}