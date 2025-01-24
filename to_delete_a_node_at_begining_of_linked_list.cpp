/*****************************to_delete_a_node_at_begining_of_linked_list.cpp******************************/
#include<iostream>
using namespace std;
class node
    {
        public :
        int data;
        node *next;
        node(int val)
        {
            this->data=val;
            this->next=nullptr;
        }
    };

 class list
 {
    public :
    node *head,*tail;
    list()
    {
        head=nullptr;
        tail=nullptr;

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
    void create(int val)
    {
        node *newnode=new node(val);
        if(head==nullptr)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;

        }
    }
    void delete_append()
    {
        if (head==nullptr)
        {
            cout<<"\nthe linked list is empty\n";
            return;
        }
        cout<<"\nthe linked list after deletion of ist node is : ";
        node *temp=head;
        head=temp->next;
        delete(temp);
        temp=nullptr;

    }
 };
 int main ()
 {
    list ll;

    int count ;
    cout<<"\nenter the no. of node of linked list \n";
    cin>>count;
    cout<<"\nenter the data for each node of lijnked list\n";

    for (int i = 0; i < count; i++)
    {
        int a;
        cout<<"\nenter the data for node "<<i+1<<" : ";
        cin>>a;
        ll.create(a);

    }
    cout<<"\nthe linked list you create is : ";
    ll.display();
    ll.delete_append();
    ll.display();
    return 0;


    
 }   