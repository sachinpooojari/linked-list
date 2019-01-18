#ifndef HEADDER_H
#define HEADDER_H
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	char name[10];
	int age;
	struct Node *next;
	

}Node;
//add_node.c
void add_begin(Node **);
void add_end(Node **);
void sort_add(Node **);
void sort(Node **);
void sort_node(Node **);
//print.c
void print_node(Node *);
void print_file(Node *,const char *);
void print_address(Node *);
//count.c
int count_node(Node *);
int count_rec(Node *);
//reverse.c
void rev_recursion(Node *);
void rev_loop(Node *);
void rev_array_P(Node *);
void rev_data(Node **);
void rev_link(Node **);
void rev_link_array(Node **);//my logic 
void rev_link_array_P(Node **);
//delete.c
void delete_begin(Node **);
void delete_end(Node **);
void delete_node(Node **,int ); // headpointer and data to be deleted 
void delete_all_node(Node **);
/*hai*/


#endif
