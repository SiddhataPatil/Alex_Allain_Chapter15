/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program to find an element in a linked list by name. // Traverse a Linked List
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

bool find1 (node* s, int no)
{
    bool op = false;
	while(s!=NULL)
	{
		if(s->data==no)
        {
		op = true;
        }
    s=s->next_link;
	}
	return op;
}

int main()

{

	node* p = NULL;
	node* p1;
	p1=get_new(p,1);
	print1(p1);
  bool result =find1(p1, 3);
	if(result)
    {
        cout<<"Element found"<<endl;
    }
    else cout<<"Element NOT found"<<endl;
	system ("pause");
	return 0;

}
