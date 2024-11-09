#include<stdio.h>
#include<stdlib.h>


struct  n
{
	int x;
	struct n* next;

};

typedef struct n node;

void priint(node* r) {

	while (r->next != NULL)
	{
		r = r->next;
		printf("%d ", r->x);
	}

}




int main() {

	node* root;
	root = (node*)malloc(sizeof(node));
	node* voy;// we ve created a node to travel
	voy = root;// equiazed to the root to can be start from the beggining
	root->x = 0;// assignininig values to the root because of root is a node too
	root->next = NULL;//to understand when the series is end assingning roots next to NULL
	
	int k;
	printf("%s", "how much do u want to create node ");
	scanf_s("%d", &k);

	for (int i = 0; i<k; i++)// creating 5 new nodes
	{
		voy->next = (node*)malloc(sizeof(node));
		voy = voy->next;
		voy->next = NULL;
		voy->x = i * 10;
	}
	//creating new stacks on memory for new datas

	priint(root);// printing from the start
	
}