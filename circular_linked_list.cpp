/************************circular_linked_list.cpp***********************/
#include<iostream>
using namespace std;
class node 
{
    public :
    int data;
    node *next;
    node (int val)
    {
        this ->data=val;
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
            
           while(temp->next!=head)
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
    void insert(int data,int ind)
    {
        node *temp=head;
        node *newnode=new node(data);
        if(head==nullptr )
        {
            head=newnode;
            newnode->next=head;

        }
        if(ind==0)

        {
            
            newnode->next=head;
            head=newnode;
           
        }
        

        int i=0;
        for ( i = 0; i < ind-1; i++)
        {
           temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;

        
    }
};
int main()
    {
        list ll;
        int count;
        cout<<"\nenter the no.of nodes\n";
        cin>>count;
        cout<<"\nenter the data for each nde of link list \n";
        for (int i = 0; i < count; i++)
        {
             cout<<"\nenter the data for node "<<i+1<<" : ";
             int a;
             cin>>a;
             ll.create(a);
        }
        cout<<"\nthe linked list that you had created is : ";

        ll.display();
        cout<<"\nthe linked after insertion of newnode is : ";

       int num;
       cout<<"\nenter the data for newnode : ";
       cin>>num;
       int pos;
       cout<<"\nenter the position at which you want to insert the newnode\n";

       cin>>pos;
      
       ll.insert(num,pos);
        cout<<"\nenter the position at which you want to insert the newnode\n";
       ll.display();
       return 0;


        
        
    }