#include"headder.h"
#include<string.h>
void rev_recursion(Node *p)
{
	if(p)
	{
		rev_recursion(p->next);
		printf("%-15s | %d\n",p->name,p->age);
	}
}

void rev_loop(Node *p)
{
	int i,j;
	int c=count_node(p);
	for(i=1;i<=c;i++)
	{	Node *tmp;
		tmp=p;
		for(j=c-i;j>0;j--)
		{
			tmp=tmp->next;
		
		}
		printf("%-15s | %d\n",tmp->name,tmp->age);
	
	}
	

}
void rev_array_P(Node *p)
{
	int c=count_node(p);
	Node **ap;
	ap=(Node **)calloc(c,sizeof(Node *));
	int i;
	for(i=0;i<c;i++)
	{	ap[i]=(Node *)malloc(sizeof(Node  ));
		ap[i]=p;
		p=p->next;	
	}
	for(i=c-1;i>=0;i--)
	{
		
		printf("%-15s | %d\n",ap[i]->name,ap[i]->age);
	}

	


}



//to reverse the data not the node links 
void rev_data(Node **p)
{
	Node *F=*p;
	Node *L=*p;
	int i,j,c;// c for  node count
	c=count_node(*p);
	for(i=0;i<(c/2);i++)
	{

		for(j=0;j<c-i-1;j++)
			L=L->next;
		{

			int temp;
			temp=F->age;
			F->age=L->age;
			L->age=temp;

			char name[20];
			strcpy(name,F->name);
			strcpy(F->name,L->name);
			strcpy(L->name,name);


		}
		F=F->next;
		L=*p;
	}

}


void rev_link(Node **hptr)
{
	Node *currunt=*hptr;
	Node *prev=NULL;
	Node *next;
	while(currunt!=NULL)
	{
		next=currunt->next;
		currunt->next=prev;
		prev=currunt;
		currunt=next;	
	
	}
	*hptr=prev;

	
}


void rev_link_array(Node **hptr)
{

	Node *tmp=*hptr;
	int c=count_node(*hptr);
	Node  **arr;
	arr=(Node **) calloc(c,sizeof(Node *));
	int i,j;

	for(i=0;i<c;i++)
		arr[i]=(Node *)malloc (sizeof(Node ));
	for(i=0;i<c;i++)
	{	tmp=*hptr;
			//for(j=0;j<c-1-i;j++)
			for(j=0;j<i;j++)
				tmp=tmp->next;
			arr[i]=tmp;
	}

	for(i=0;i<c;i++)
	{
		tmp=*hptr;
		for(j=0;j<c-1-i;j++)
			tmp=tmp->next;
		if(c-i-2>=0)
			tmp->next=arr[c-i-2];
		else
			tmp->next=0;
			
	}
			*hptr=arr[c-1];
//	*hptr=arr[0];	/	
		
}





void rev_link_array_P(Node **hptr)

{	Node *tmp=*hptr;
	int c=count_node(*hptr);
	Node  **arr;
	arr=(Node **) calloc(c,sizeof(Node *));
	int i,j;

	for(i=0;i<c;i++)
		arr[i]=(Node *)malloc (sizeof(Node ));
	for(i=0;i<c;i++)
	{	tmp=*hptr;
			//for(j=0;j<c-1-i;j++)
			for(j=0;j<i;j++)
				tmp=tmp->next;
			arr[i]=tmp;


	}
	arr[0]->next=NULL; /// first node next  adress make 0
	for(i=1;i<c;i++)
		arr[i]->next=arr[i-1];
	*hptr=arr[c-1];

}
