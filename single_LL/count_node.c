#include"headder.h"
int count_node(Node *hptr)
{	int c=0;
	while(hptr)
	{
		c++;
		hptr=hptr->next;
		
	}
	return c;
	
}

int count_rec(Node *hptr)
{
	static int c=0;
	if(!hptr)
		return 0;
	else

		return 1+count_rec(hptr->next);


}
