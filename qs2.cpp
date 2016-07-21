/*
 ==============================================================================================================================
 Name        : qs2.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program to remove an element from a linked list; the remove function should take just
               the element to be removed. Is this function easy to write—and will it be fast? Could this be
               made easier or faster by adding an additional pointer to the list?
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

struct node

{
	int data;
	node* next_link;

};

void print1(node* s)
{cout<<"********Linked List********"<< endl;
while(s!=NULL)
{
    cout<<s->data<<endl;
	s=s->next_link;
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

void insert1(node* s, int data1)
{
node* temp_link;
node* new_link=new node;
int temp;
	while(s!=NULL)
	{
		if((s->data)<=(data1))
		{
			temp_link= s->next_link;
			temp=s->data;
			s->data=data1;
			s->next_link= new_link;
			new_link->next_link=temp_link;
			new_link->data=temp;
			break;
		}
		if((s->data)>(data1)&& (s->next_link->data)<(data1))
		{
			temp_link=s->next_link->next_link;
			temp=s->next_link->data;
			s->next_link->data= data1;
			s->next_link->next_link=new_link;
			new_link->next_link= temp_link;
			new_link->data = temp;
			s=s->next_link;
			break;
		}
		else
			s=s->next_link;
	}
}

int main()

{

	node* p = NULL;
	node* p1;

	p1=get_new(p,1);
	print1(p1);
	insert1(p1,5);
	print1(p1);

	system ("pause");
	return 0;

}
