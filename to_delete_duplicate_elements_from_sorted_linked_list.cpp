/**********************to_delete_duplicate_elements_from_sorted_linked_list.cpp****************************/
#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=nullptr;
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
    void removeduplicate()
    {
        node *p=head;
        node *q=head->next;
        {
            while(q!=nullptr)
            {
                if(p->data==q->data)
                {
                    p->next=q->next;
                    node *t=q;
                    q=q->next;
                    delete(t);
                    
                }
                p=q;
                q=q->next;

            }
        }

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
    cout<<"\nafter removing dulicate elements from linked list ,the list becomes : ";
    ll.removeduplicate();
    ll.display();
    return 0;


}