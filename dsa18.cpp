#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct dict{
	char c;
	char key[10];
};

int main(){
	struct dict map[100];
	map[1].c = 'a'; map[1].key[] = {'2','3','4','\0'};
	/*map[2].c = 'b'; map[2].key = ;
	map[3].c = 'c'; map[3].key = ;
	map[4].c = 'd'; map[4].key = ;
	map[5].c = 'e'; map[5].key = ;
	map[6].c = 'f'; map[6].key = ;
	map[7].c = 'g'; map[7].key = ;
	map[8].c = 'h'; map[8].key = ;
	map[9].c = 'i'; map[9].key = ;
	map[10].c = 'j'; map[10].key = ;
	map[11].c = 'k'; map[11].key = ;
	map[12].c = 'l'; map[12].key = ;
	map[13].c = 'm'; map[13].key = ;
	map[14].c = 'n'; map[14].key = ;
	map[15].c = 'o'; map[15].key = ;
	map[16].c = 'p'; map[16].key = ;
	map[17].c = 'q'; map[17].key = ;
	map[18].c = 'r'; map[18].key = ;
	map[19].c = 's'; map[19].key = ;
	map[20].c = 't'; map[20].key = ;
	map[21].c = 'u'; map[21].key = ;
	map[22].c = 'v'; map[22].key = ;
	map[23].c = 'w'; map[23].key = ;
	map[24].c = 'x'; map[24].key = ;
	map[25].c = 'y'; map[25].key = ;
	map[26].c = 'z'; map[26].key = ;
	map[27].c = '0'; map[27].key = ;
	map[28].c = '1'; map[28].key = ;
	map[29].c = '2'; map[29].key = ;
	map[30].c = '3'; map[30].key = ;
	map[31].c = '4'; map[31].key = ;
	map[32].c = '5'; map[32].key = ;
	map[33].c = '6'; map[33].key = ;
	map[34].c = '7'; map[34].key = ;
	map[35].c = '8'; map[35].key = ;
	map[36].c = '9'; map[36].key = ;*/
	/*map[37].c = ''; map[37].key = ;
	map[38].c = ''; map[38].key = ;*/
	cout << map[1].key;	
	return 0;
}