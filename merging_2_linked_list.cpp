/***********************************merging_2_linked_list.cpp**********************/
#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node *next;
    node (int val)
    {
        this->data=val;
        this->next=nullptr;
    }
};
class list 
{
    public :
    node *head,*tail;
    list ()
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
    void create (int val)
    {
        node *newnode=new node (val);
        if(head==nulptr)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;

        }
    }
    
   int count(node *temp)
    {
        int i=1;
        while(temp!=nullptr)
        {
            i++;
            temp=temp->next;
        }
        return i;
    }
    void arrage(int arr[],int count)
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = i+1; j < count; j++)
            {
                if(arr[i]>arr[j])
                {
                    swap(arr[i],arr[j]);
                }
            }
            
        }
        
    }
    void merge ()
    {
        node *n=ll2;
        node *temp=head;
        while(temp!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=n;
        free(n);


        node *t=head;
        int m=count(temp);
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            arr[i]=t->data;
            t=t->next;
        }
        arrage(arr,m);
        node *w=head;
        for (int i = 0; i < m; i++)
        {
           w->data=arr[i];
           w=w->next;
        }

        
        
    }
};
int main ()
{
    list ll;
    list ll2;
    int count,count2;
    cout<<"\nenter the no. of node for ist linked list please";
    cin>>count;
    cout<<"\nenter the data for each node of linked list\n";
    for (int i = 0; i < count; i++)
    {
       int a;
       cout<<"\nenter the data for node no. "<<i+1<<" : ";
       cin>>a;
       ll.create(a);


    }
     cout<<"\nenter the no. of node for 2nd linked list please";
    cin>>count2;
    cout<<"\nenter the data for each node of 2nd linked list\n";
    for (int i = 0; i < count2; i++)
    {
       int a;
       cout<<"\nenter the data for node no. "<<i+1<<" : ";
       cin>>a;
       ll2.create(a);


    }
    ll.merge();
    ll.display();

    return 0;

    
}