/************************implementation_of_circular_linked_list************************/
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
    node *head;
    list()
    {
        head=nullptr;
       

    }
    void create(int val)
    {
        node *newnode=new node(val);
        node *temp=head;
        if(head==nullptr)
        {
            head=newnode;
            newnode->next=head;
        }
        else
        {
            while(temp->next != head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;


        }
    }
    void display()
    {
        node *temp=head;
        do
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        } while (temp!=head);
        cout<<"null";
        
    }
    
};
int main ()
{
    list ll;
     int count ;
    cout<<"\nenter the no. of node of linked list \n";
    cin>>count;
    cout<<"\nenter the data for each node oflinked list\n";

    for (int i = 0; i < count; i++)
    {
        int a;
        cout<<"\nenter the data for node "<<i+1<<" : ";
        cin>>a;
        ll.create(a);

    }
    cout<<"\nthe linked list you create is : ";
    ll.display();
    return 0;
    
    
    
}
