#include"headder.h"
void main()
{	D_Node *hptr=0;
	char ch;
	printf("Enter data\n");
	do{
		add_begin(&hptr);
		//add_end(&hptr);
		//sort_add(&hptr);
		printf("\nadd Y/N?\n");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');
	print_node_F(hptr);
	puts("\n**************\n");
	sort_data(hptr);
	//print_node_R(hptr);

	print_node_F(hptr);
	
//	rev_link(&hptr);
	do
	{			
		puts("\n**************\n");
	//	delete_begin(&hptr);
	//	delete_end(hptr,);
		int data;
		puts("data to delete");
		scanf("%d",&data);
		delete_data(&hptr,data);
		print_node_F(hptr);

		printf("\ndelete Y/N?\n");
		scanf(" %c",&ch);
	}while(ch=='Y' || ch=='y');
}
