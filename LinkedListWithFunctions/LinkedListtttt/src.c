#include<stdio.h>
#include<stdlib.h>

struct n {

	int x;
	struct n* next;
};

typedef struct n node;

void print(node*r) {

	printf("%d ", r->x);
	while (r->next != NULL) {
		r = r->next;
		printf("%d ", r->x);
	}
}

node* add(node*r, int y) {

	if (r == NULL)//bos ise yaratma
	{
		r = (node*)malloc(sizeof(node));
		r->next = NULL;
		r->x = y;
		return r;
	}

	if (r->x > y)//en basa ekleme
	{
		node* temp = (node*)malloc(sizeof(node));
		temp->x = y;
		temp->next = r;
		return temp;
	}
	node* voy = r; //araya ekleme

	while (voy->next != NULL && voy->next->x < y) {

		voy = voy->next;
	}

	node* temp = (node*)malloc(sizeof(node));
	temp->next = voy->next;
	temp->x = y;
	voy->next = temp;
	

	if (r->next == NULL) { //sona

		if (r->x > y) {
			node* temp = (node*)malloc(sizeof(node));
			temp->x = y;
			temp->next = r;	
			return r;//root degeri artik en basta olmadigi icin onun yerine az once en basa ekledigimiz nodeu koymamiz gerek bu bunu
		  			 //koyabilmek icinse eski root degiskenini r degerine yani en basa ekledigimiz degere esitlememiz gerekir
		}
		else
		{
			node* temp = (node*)malloc(sizeof(node));
			temp->x = y;
			r->next = temp;
			temp->next = NULL;
			return r;
		}
	}
}

node* del(node* r, int x) {

	node* voy = r;
	node* temp;
	while (voy->next != NULL && x == voy->next->x)// tekrar buratya gediginde kontrol edioyor
	{
		voy = voy->next;
	}
	if (voy->next == NULL)
	{
		printf("%s", "no number found");
		return r;
		
	}
	else
	{
		temp = voy->next;
		voy->next = voy->next->next;
		free(temp);
		
		return r;
	}
	

}

int main() {

	node* root;
	root = (node*)malloc(sizeof(node));
	node* voy;
	root = NULL;
	root = add(root, 2);
	root = add(root, 12);
	root = add(root, 13);
	root = add(root, 21);
	root = add(root, 14);
	root = add(root, 14);

	print(root);

	root = del(root, 14);
	printf("%s ", "||||");

	print(root);

}