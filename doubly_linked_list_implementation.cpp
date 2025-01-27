/***********************doubly_linked_list_implementation.cpp*******************/
#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node *next;
    node *pre;
    node (int val)
    {
        this->data=val;
        this->next=nullptr;
        this->pre=nullptr;

    }
};
class doubly_linked_list
{
    public :
    node *head;
    node *tail;
    doubly_linked_list()
    {
        head=nullptr;
        tail=nullptr;

    }
    void create(int val)
    {
       node *newnode=new node (val);
       if(head==nullptr)
       {
        head=tail=newnode;
        newnode->pre=NULL;
        newnode->next=NULL;  
      }
      else
      {
        newnode->pre=tail;
        tail->next=newnode;
        tail=newnode;

      }

    }
    void display()
    {
        node *temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"null";
    }
    void display_reverse()
    {
        node *temp=tail;
        while(temp !=head)
        {
            cout<<temp->data<<" -> ";
            temp=temp->pre;

        }
        cout<<temp->data<<" -> null";
    }

};
int main ()
{
    int count;
    cout<<"\nenter the no. of nodes you want to create \n";
    cin>>count;
    doubly_linked_list dll;
    cout<<"\nenter data for each node \n";
    for(int i=0;i<count;i++)
    {
        int a;
        cout<<"\nenter data of node no. "<<i+1<<" : ";
        cin>>a;
        dll.create(a);

    }
    cout<<"\nthe linked list you create is : ";
    dll.display();
    cout<<"\n the reverse of the linked list you create is : ";
    dll.display_reverse();
    return 0;

}