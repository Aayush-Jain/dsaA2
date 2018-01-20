#include <iostream>
#include <stdio.h>
using namespace std;
struct node
{
	char itemName[20];
	int itemCode;
	float price;
	int QtyInStock;
	int IsHighDemand;
	int SoldToday;
	node* next;	
};
node* getnewnode(char A[],int itemCode,float price,int QtyInStock,int IsHighDemand,int SoldToday){
	node* temp = new node();
	for(int i=0;i<20;i++) temp->itemName[i] = A[i];
	temp->itemCode = itemCode;
	temp->price = price;
	temp->QtyInStock = QtyInStock;
	temp->IsHighDemand = IsHighDemand;
	temp->SoldToday = SoldToday;
	temp->next = NULL;
	return temp;
}
node* head ; int k=0;
void add(char A[],int itemCode,float price,int QtyInStock,int IsHighDemand,int SoldToday){
	node* temp = getnewnode(A,itemCode,price,QtyInStock,IsHighDemand,SoldToday);
	if(head==NULL) head = temp;
	else{
		node* current = head;
		while(current->next!=NULL){ 
			current = current->next;
			k++;
		}
		current->next = temp;
	} 
}
void update_price(int Code , float newprice){
	node* temp = head; int a;
	//if(temp==NULL) return;
	while(temp!=NULL){
		if(temp->itemCode==Code){
			temp->price = newprice;
			break;
		}
		temp = temp->next;
	}
}
void update_stock(int itemCode , int newstock){
	node* temp = head;
	while(temp!=NULL){
		if(temp->itemCode==itemCode){
			temp->QtyInStock = newstock;
			break;
		}
		temp = temp->next;
	}
}
void print_price(){
	node* current = head;
	while (current!=NULL){
		cout << current->price << endl;
		current = current->next;
	}
}
void sell(int itemCode,int number){
	if(head==NULL) return;
	node* temp = head;
	while(temp!=NULL){
		if(temp->itemCode==itemCode){
			if(temp->QtyInStock<number) cout << "number of stocks less than to be sold";
			else temp->QtyInStock = temp->QtyInStock - number;
		}
		temp = temp->next;
	}
}
int main(){
	head = NULL;
	char A[]={'a','u','s','h'};
	add(A,1,10,1,1,1);add(A,2,10,10,1,1);add(A,3,10,1,1,1);add(A,4,10,1,1,1);
	update_stock(3,45); sell(2,5);
	print_price();//cout << k;
}