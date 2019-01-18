#include"headder.h"


void delete_begin(Node **hptr)
{
	Node *tmp;
	tmp=*hptr;
	*hptr=(*hptr)->next;
	free(tmp);


}
void delete_end(Node **hptr)
{
	Node *tmp,*tmp1;// tmp for hold 2nd last and temp1 to last node adress
	tmp=*hptr;
	while((tmp->next->next)!=0)
		tmp=tmp->next;// update 2nd last node 
	tmp1=tmp->next;// to hold last node adress 
	tmp->next=tmp->next->next;
	free(tmp1);// to free last node 


}


void delete_node(Node  **hptr,int data )
{
	Node *present; //present to hold adress of previous node of deleting node
	present=(Node *)*hptr;
	if(*hptr==0)
	{
		puts("\n\t**************Empty node************\n ");
		return;
	
	}

	if(present->age==data &&  present==*hptr)
	{	*hptr=(*hptr)->next;
		free(present);
		return;
	}

	while(present->next->age != data )  //move  untill data found  till last node 
	{
		present=present->next;
		if(present->next==0) //if data is not present 
		{	puts("\n****************No data match ****** \n ");
			return;
		}

	}

	//if(present->next->next!=0)
	{	
		Node *tmp1=present->next;	// to hold the adress of  node to  be deleted 
		present->next=present->next->next;	//remove link
		free(tmp1);	//delete node 
		
		
	}


}
void delete_all_node(Node **hptr)
{
		Node *tmp;
	while(*hptr)
	{	tmp=*hptr;
		*hptr=(*hptr)->next;
		free(tmp);
		
	}
	return;
}







