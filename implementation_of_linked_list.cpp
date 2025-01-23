/******************************************implementation_of_linked_list************************************/
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
            this->next=NULL;
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

        void insert_at_begin(int val)
        {
            node *newnode=new node(val);
            if(head==nullptr)
            {
                head=tail=newnode;

            }
            else
            {
                newnode->next=head;
                head=newnode;
            }
        }
        void insert_at_middle(int pos,int val)
        {
            node *newnode=new node(val);
            node *temp=head;
            
                if(pos<0)
                {
                    cout<<"\ninvalid index\n";
                    return ;
                }
                else if(head==nullptr)
                {
                    head=tail=newnode;
                }
                else
                {
                   while(temp->next != nullptr)
                   {
                     temp=temp->next;
                   }
                   newnode->next=temp->next;
                   temp->next=newnode;
                }
            
        }
        void insert_at_end(int val)
        {
            node *newnode=new node (val);
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
        void count()
        {
            node *temp=head;
            int i=0;
            while(temp != nullptr)
            {
                    i++;
                    temp=temp->next;
            }
            cout<<"\nno. of nodes  link_list has is : "<<i;
        }
    };    
int main ()
{   list ll;
    int count;
    cout<<"\nenter the no. of node\n";
    cin>>count;
    cout<<"\nenter the no. data for each node please\n";
    for (int i = 0; i < count; i++)
    {
        int a;
        cout<<"\nenter the data for node "<<i+1<<" : ";
        cin>>a;
        ll.insert_at_end(a);


    }
    cout<<"\nthe linked list you enter is \n";
    ll.display();
    ll.count();
    return 0;

    
}