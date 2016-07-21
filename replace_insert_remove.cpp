/*
 ==============================================================================================================================
 Name        : replace_insert_remove.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Add, Replace, Insert and Remove data in Linked List
 // Go on adding data, press 0 to stop entering data
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next_link;
};


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

void print1(node* s)
{cout<<"********Linked List********"<< endl;
while(s!=NULL)
{
    cout<<s->data<<endl;
	s=s->next_link;
}
}

void replace1(node* head, int data1)
{
    head=head->next_link->next_link;
    head->data=data1;
}


void insert1(node*head, int data1)
{
    node* temp_link;
    node* link1=new node;
    int temp;
    head=head->next_link->next_link;
    temp_link = head->next_link;
    head->next_link=link1;
    head->next_link->data =data1;
    head->next_link->next_link=temp_link;
}

void remove1 (node* s, int no)
{
	while(s!=NULL)
	{
		if(s->data==no)
		{
		s->data = s->next_link->data;
		s->next_link= s->next_link->next_link;
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
	p=p1;
	print1(p1);
	insert1(p1,25);
	print1(p1);
	replace1(p1,77);
	print1(p1);
    remove1(p1, 3);
	print1(p1);
	system ("pause");
	return 0;

}
