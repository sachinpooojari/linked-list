#ifndef HEADDER_H
#define HEADDER_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef  struct Node
{	struct Node *prev;
	int age;
	char name[20];
	struct Node *next;
}D_Node;

//add_D_Node.c
void add_begin(D_Node **);
void add_end(D_Node **);
void sort_data(D_Node *);

//print_D_Node.c
void print_node_F(D_Node *); //forword print by forword node direction
void print_node_R(D_Node *); //Reverse print by reverse node direction
void rev_link(D_Node **); // Reverse the Link 

//delete.c
void delete_begin(D_Node **);
void delete_end(D_Node *);
void delete_data(D_Node **,int);
//
#endif

