/*
 ==============================================================================================================================
 Name        : make_a_linkedList.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Add data to nodes of a Linked List and also display its addresses 
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

#include <cstddef>
struct node
{
	int data;
	node* next_link;
};


node* get_new(node* head, int new_data)
{
	head=NULL;
	node* link = new node;
	link->data=new_data;
	link->next_link=head;
	cout<< "Data: " <<link->data<< endl;
	cout<<link<<endl;
	head = link;
	return link;

}

void print1(node* s)
{
	cout<<s->data<<endl;
	cout<<s<<endl;
}

int main()
{
	node* p = new node;
	node* p1;
	p1=get_new(p,1);
	p1=get_new(p,2);
	p1=get_new(p,3);
	p1=get_new(p,4);
	p1=get_new(p,5);
	print1(p1);
	system ("pause");
	return 0;
}
