/*
 ==============================================================================================================================
 Name        : Loop_in_Linked_list.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Determine whether the given link list is correct or not using two pointers on faster than the other.
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

struct node

{
	int data;
	node* next_link;

};

void print(node* s)
{
while(s!=NULL)
{
	cout<<s->data<<endl;
	s=s->next_link;
}
}
void loop(node* s)
{
while(s!=NULL)
{
	node* fast_pointer = s;
	s=s->next_link;
	fast_pointer=s->next_link->next_link;
	cout<<s->data<<endl;
	cout<<fast_pointer->data<<endl;
	if(fast_pointer==s)
	{
		cout<<"There is a loop"<<endl; 
		s->next_link->next_link = NULL;
		break;
	}
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

void modify(node *s)
{
	s->next_link->next_link->next_link=s->next_link;
}

int main()

{

	node* p = NULL;
	node* p1;
	p1=get_new(p,1); 
	cout<<"linked List"<<endl;
	print(p1);
	modify(p1);
	cout<<"Modified linked List"<<endl;
	loop(p1);
	print(p1);
	system ("pause");
	return 0;

}
