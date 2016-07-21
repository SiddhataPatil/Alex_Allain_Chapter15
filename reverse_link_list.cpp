/*
 ==============================================================================================================================
 Name        : reverse_link_list.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Reverse link list using the link pointing to the previous node
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

#include <cstddef>

struct node

{
	int data;
	node* next_link;
	node* prev_link;

};

void print1(node* s)
{
while(s!=NULL)
{
    cout<<s->data<<endl;
	s=s->next_link;
}
}

void print2(node* s)
{
while(s!=NULL)
{
	cout<<s->prev_link<<endl;
	s=s->next_link;
}
}

void print3(node* s)
{
	while(s!=NULL)
{
	cout<<s->data<<endl;
	s=s->prev_link;
}
}

node* get_new(node* head, int new_data)
{
	node* link = new node;
	link->data=new_data;
	link->next_link=head;
	
	cout<< "Data: " <<link->data<< endl;
	cout<<"Link: "<<link<<endl;
	cout<<"Next link: "<<link->next_link<<endl;

	head=link;
	cin>>new_data;
    if(new_data!=0)
    {
	head=get_new(head,new_data);
    }
    return head;
}

node* get_previous(node *s, int no)
{
	s->prev_link=NULL;
	node* temp;
	while (s->next_link!=NULL)
	{	s->next_link->prev_link=s;
		s=s->next_link;
	}
	return s;

}
int main()

{

	node* p = NULL;
	node* p1;
	node* p2;
	p1=get_new(p,1);
	p2=get_previous(p1,5);

	cout<<"Original linked list"<<endl;
	print3(p2);
	cout<<"Reverse linked List"<<endl;
	print1(p1);

	system ("pause");
	return 0;

}
