/****______________________________merging_two_linked_lists.cpp_____________________*****/
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
            this->next=NULL;
        }

    };
class list
    {
        public :
        node *head,*tail;
        list()
        {
            head=NULL;
            tail=NULL;
        }
        void push_front(int val)
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
            node *temp1=head;
            while(temp1 != nullptr)
            {
                cout<<temp1->data<<"->";
                temp1=temp1->next;
            }
            cout<<"null";
        }
    };
    void print (node *head)
    {
        node *temp=head;
        while(temp != nullptr)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"null";
    }
void merge(node *ll1,node *ll2)
    {
        node *temp=ll1;
        while(temp->next != nullptr)
        {
           temp=temp->next;
        }
       temp->next=ll2;
       print(ll1);
       

    }   
   int main ()
   {
        list ll1;
        list ll2;
       int count;
       cout<<"\nenter the node of nodes of ist linked list\n";
       cin>>count;
       cout<<"\nenter the elements of ist linked list\n";
       for (int i = 0; i < count; i++)
       {
          int a;
          cout<<"\nenter the elements no "<<i+1<<" : ";
          cin>>a;
          ll1.push_front(a);
          

       }
       int count2;
       cout<<"\nenter the no. of node of link list second \n";
       cin>>count2;
       for (int i = 0; i < count2; i++)
       {
          int a;
          cout<<"\nenter the element no. "<<i+1<<" : ";
          cin>>a;
          ll2.push_front(a);

       }
       cout<<"\nthe single mergered linked list thus,formed is \n";
       merge(ll1.head,ll2.head);
      
       return 0;

       
   } 
