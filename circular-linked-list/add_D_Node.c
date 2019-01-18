#include"headder.h"
void add_begin(D_Node **hptr)
{
	D_Node *a;
	a=(D_Node *)malloc(sizeof(D_Node ));
	printf("Enter Name | age\n");
	scanf("%s%d",a->name,&a->age);
	if(*hptr==0)//first node 
	{
		a->next=a->prev=*hptr;
		*hptr=a;	

	}
	else 
	{	
		a->next=*hptr;
		a->prev=(*hptr)->prev;
		*hptr=(*hptr)->prev=a;
	}


}

void add_end(D_Node **hptr)
{
	D_Node *a;
	a=(D_Node *)malloc(sizeof(D_Node ));
	printf("Enter Name | age\n");
	scanf("%s%d",a->name,&a->age);
	if(*hptr==0)//first node 
	{
		a->next=a->prev=*hptr;
		*hptr=a;	

	}
	else 
	{	D_Node *last;
		last=*hptr;
		while(last->next)	//to find last node 
			last=last->next;

		a->next=last->next;
		a->prev=last;
		last->next=a;
	}


}


void sort_add(D_Node **hptr)


{
	D_Node *a,*temp;
	temp=*hptr;
	a=(D_Node *)malloc(sizeof(D_Node ));
	printf("Enter Name | age\n");
	scanf("%s%d",a->name,&a->age);
	if(*hptr==0)//first node 
	{
		a->next=a->prev=*hptr;
		*hptr=a;	
	}
	else if ((*hptr)->age > a->age)  //  to begin
	{	
		a->next=*hptr;
		a->prev=(*hptr)->prev;
		*hptr=(*hptr)->prev=a;

	}
	else {
		while(temp->next)
		{		if(temp->next->age > a->age)   //between
			{	
				a->next=temp->next;
				a->prev=temp;
				temp->next=temp->next->prev=a;
				return;
			}	
			temp=temp->next;
		}
		a->next=temp->next; ///to add 0 for last node 
		a->prev=temp;
		temp->next=a;

	}




}
void sort_data(D_Node *hptr)
	
{	D_Node *hptr1,*tmp;
		tmp=hptr;	
	hptr1=hptr;
	int i,j;
	int n;
	for(n=1;hptr1=hptr1->next;n++); // to count node 
//	printf("<%d>",n);
	for(i=0;i<n;i++)
	{ 	for(j=0;j<n-1-i;j++)
		{
			if (tmp->age < tmp->next->age)
			{	
				int temp1;
				temp1=tmp->age;
				tmp->age=tmp->next->age;
				tmp->next->age=temp1;
			
			}
			tmp=tmp->next;
		}
		tmp=hptr;	
	
	}


}
