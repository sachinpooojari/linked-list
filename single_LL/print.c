#include"headder.h"


void print_node(Node *p)
{	if(!p)
	{	puts("Empty node !!! no data ");
		return;
	}
	while(p)
	{
		printf("%-10s|%-5d\n",p->name,p->age);
		p=p->next;
	
	}


}

void print_file(Node *p,const char *f_name)
{	
	if(!p)
	{	puts("Empty node !!! no data ");
		return;
	}
FILE *fp;
	fp=fopen(f_name,"w");
	if(!fp)
		{ puts("Error creating file "); return;	}
	while(p)
	{
		fprintf(fp,"%15s | %-5d\n",p->name,p->age);
		printf("%-10s|%-5d\n",p->name,p->age);
		p=p->next;
		
	}
fclose(fp);

}

void print_address(Node *p)
{
	if(!p)
	{	puts("Empty node !!! no data ");
		return;}
	while(p)
	{
		printf("%p\n",p);
		p=p->next;
	

	}
}
