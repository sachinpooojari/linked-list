#include"headder.h"

void delete_begin(D_Node **hptr)
{
	if(*hptr==0)
	if(*hptr==0)
	{	puts("Empty node ....nothing to delete");
		return;
	
	}
	D_Node *temp;

	temp=*hptr;
	(*hptr)->next->prev=(*hptr)->prev;
	*hptr=(*hptr)->next;
	free(temp);
	


}

void delete_end(D_Node *hptr)
{

	if(hptr==0)
	{	puts("Empty node ....nothing to delete");
		return;
	}

	D_Node *last;
	last=hptr;
	while(last->next)
		last=last->next;
	
	last->prev->next=last->next;
	free(last);	
	



}

void delete_data(D_Node **hptr,int data)
{
	
	if(*hptr==0)
	{	puts("Empty node ....nothing to delete");
		return;
	
	}
	D_Node *temp;
	
	temp=*hptr;
	while(temp!=0)
	{
	       
	if(temp->age ==data)
	{
		if(temp->next==0 && temp->prev==0)//if onnly one node 
		{
			*hptr=0;
		}
		else if(temp->prev==0) //first node 
		{	(*hptr)->next->prev=(*hptr)->prev;
			*hptr=(*hptr)->next;
		}

		else if(temp->next==0) /// to last node 
		{
			temp->prev->next=temp->next;

		}	
		else // to middle node 
		{
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
	
		}
			free(temp);
		return;
	}
		temp=temp->next;
	}
	printf("\nDATA not present ....\n");


}


