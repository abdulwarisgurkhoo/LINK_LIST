/*************************************to_find_the_max_in_linked_list******************************/
#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node *next;
    node(int val)
    {
        this ->data=val;
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
    void create (int val)
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
    void display()
    {
        node *temp=head;
        while(temp != nullptr)
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;

        }
        cout<<"null";
    }
    void max()
    {
        node *temp=head;
        int n=temp->data;
        while(temp != NULL)
        {
            if(n<temp->data)
            {
                n=temp->data;
                
            }
            temp=temp->next;
        }
        cout<<"\nthe maximum element present in linked list you entered is : "<<n;
    }
};
int main ()
    {
        list ll;

        int count;
        cout<<"\nenter the number of nodes you wangt to create in linked list \n";
        cin>>count;
        cout<<"\nplease enter the data of node of linked list\n";
        for (int i = 0; i < count; i++)
        {
            int a;
            cout<<"\neenter the data of node node  : "<<i+1<<" :- ";
            cin>>a;
            ll.create(a);

        }
        cout<<"\nthe linked list you made is : ";
        ll.display();
        ll.max();
        return 0;

        
    }