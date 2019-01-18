#include"headder.h"
#include<string.h>

void add_begin(Node  **hptr)
{
	Node *a;
	a=(Node *)malloc(sizeof(Node ));
	printf("Name| age\n");
	scanf("%s%d",a->name,&a->age);
	a->next=*hptr;
	*hptr=a;

}

void add_end(Node **hptr)
{
	//	static Node *tmp; // to store previous data




	Node *tmp; // to store previous data
	Node *a;
	a=(Node *)malloc(sizeof(Node ));
	printf("Name| age\n");
	scanf("%s%d",a->name,&a->age);
	if(!(*hptr))
	{	
		a->next=*hptr;
		*hptr=a;
		//	tmp=a;	
	}

	else
	{
		tmp=*hptr;
		while(tmp->next)
			tmp=tmp->next;
		a->next=tmp->next;
		//a->next=tmp->next;
		tmp->next=a;
		//		tmp=a;

	}


}

//to sort and add
void sort_add(Node **hptr)
{	 Node *temp;
	Node *a;
	a=(Node *)malloc(sizeof(Node ));
	printf("Name| age\n");
	scanf("%s%d",a->name,&a->age);
	temp=*hptr;
	if(!*hptr || ((temp->age) >( a->age)))//for hptr ==0  and first node 
	{
		a->next=*hptr;
		*hptr=a;
	}
	else 
	{

		while((temp->next)!=0)  //untill last node ,to get each node address  and  to add in between
		{



			if((temp->next->age)>(a->age)) 
			{

				a->next=temp->next;
				temp->next=a;		
				return;		

			}
			else 
				temp=temp->next;				


		}

		a->next=temp->next;
		temp->next=a;
		return;
		//a->next=temp->next;
		//temp->next=a;
	}



}

void sort(Node **hptr)
{
	Node *temp;//temprory pointer to not to change head pointer 
	temp=*hptr;
	int i,j;
	int n=count_node(*hptr);
	for(i=1;i<n;i++)
	{	for(j=1;j<=n-i;j++)
		{
			if(temp->age >temp->next->age) //decending order
			{	int data;
				data=temp->age;
				temp->age=temp->next->age;
				temp->next->age=data;

				char name[20];
				strcpy(name,temp->name);
				strcpy(temp->name,temp->next->name);
				strcpy(temp->next->name,name);
					
			
			}
			temp=temp->next;
		}
		temp=*hptr;
	}



}



void sort_node(Node **hptr)
{
	Node *prev;
	Node *cur;
	Node *Next;
	int n=count_node(*hptr);
	cur=*hptr;
	prev=*hptr;
	int i,j;
	for(i=1;i<n;i++)
	{	cur=(*hptr)->next;
		prev=(*hptr);
	//	Next=(*hptr)->next->next;
		for(j=1;j<=n-i;j++)
		{
			if((*hptr)->age > (*hptr) ->next->age)
			{	Node *t1,*t2;
				t1=(*hptr)->next->next;
				t2=(*hptr)->next;

				(*hptr)->next->next=(*hptr);
				(*hptr)->next=t1;
				(*hptr)=t2;			
						
			//	cur=(*hptr)->next;
			//	prev=(*hptr);
//			Next=(*hptr)->next->next;
				continue;
			}
			else
			
			{	j++;
			       	if(cur->age > cur ->next->age)
				{		
				//Next=cur->next;
				Node *t1,*t2;
				t1=cur->next->next;
				t2=cur->next;
				cur->next->next=cur;
				cur->next=t1;
				prev->next=t2;


				}
			}
			cur=prev->next->next;
			prev=prev->next;
		}
	}



}
