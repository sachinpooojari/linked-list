#include"headder.h"
void print_node_F(D_Node *p)
{	if(!p)
	{	puts("\n\n\tempty Node\n\n");
		return;
	}

	while(p)
	{	printf("Name =%-10s| age= %-5d\n",p->name,p->age);
		p=p->next;
	}

}

	
void print_node_R(D_Node *p)
{	if(!p)

	{	puts("\n\n\tempty Node\n\n");
		return;
	}
	
	while(p->next)
		p=p->next;
	while(p)
	{	printf("Name =%-10s| age= %-5d\n",p->name,p->age);
		p=p->prev;
	}

}
//reverse link  
void rev_link(D_Node **hptr)
{

	D_Node *p;
	p=*hptr;
	while(p->next) // to get last node 
		p=p->next;
	*hptr=p;
	while(p)
	{
		D_Node *tmp;    //swap node adresses
		tmp=p->next;
		p->next=p->prev;
		p->prev=tmp;

		p=p->next;
	}
	
}

