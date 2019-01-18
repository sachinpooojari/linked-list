#include"headder.h"

void  main()
{
	char ch;
	Node *hptr=0,*hptr1=0;
/*	do{
		add_begin(&hptr);
		puts("Add y/n?");
		scanf(" %c",&ch);
	}while(ch=='y');
	nt_node(hptr);
	
*/	
	do{
		add_end(&hptr1);
	//	sort_add(&hptr1);
		puts("Add y/n?");
		scanf(" %c",&ch);
	
	
	}while(ch=='y');
	print_node(hptr1);
//	print_address(hptr1);
	


	printf("count=%d\n",count_node(hptr1));	
//	printf("recursive count=%d\n",count_rec(hptr1));	
	

//	print_file(hptr1,"dbms");
//	rev_recursion(hptr1);
//	rev_loop(hptr1);
///	rev_array_P(hptr1);
//	rev_data(&hptr1);
//	rev_link_array(&hptr1);	
//	print_node(hptr1);
	puts("**************");
//	delete_begin(&hptr1);
//	delete_begin(&hptr1);
//	delete_end(&hptr1);
/*	int data;
	do
	{
		puts("ENter delete data");
		scanf("%d",&data);
		delete_node(&hptr1,data);
		puts("delete again Y/N?  ");
		scanf(" %c",&ch);
		print_node(hptr1);
	}while(ch=='Y' || ch=='y');

	//delete_end(&hptr1);
*/	printf("\n\t***********FINAL DATA***********\n\n");
//	sort(&hptr1);
	sort_node(&hptr1);
	print_node(hptr1);
	//print_address(hptr1);
	printf("\n\t***********FINAL DATA***********\n\n");
	delete_all_node(&hptr1);	
	print_node(hptr1);
	return;
}


