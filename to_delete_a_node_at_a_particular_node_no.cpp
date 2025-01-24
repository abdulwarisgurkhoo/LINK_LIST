/***-------------------------to_delete_a_node_at_a_particular_node_no.cpp--------------------------------------***/
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
    void delete_ind(int index)
    {
        node *temp=head;
        node *t=head;
        int i=0;
        while(i<index-1)
        {
            t=temp;
            temp=temp->next;
            i++;
        }
        t->next=temp->next;
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
    int ind;
    cout<<"\nenter the index at which you want to delete the node\n";
    cin>>ind;
    ll.delete_ind(ind);

    
    ll.display();
    return 0;


    
 }   