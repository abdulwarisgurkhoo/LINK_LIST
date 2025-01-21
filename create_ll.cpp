/**********************88linked list implementation*******************/
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
           head=NULL;
           tail=NULL;
        }

        void push_front(int val)
        {
            node *newnode=new node(val);
            if(head==NULL)
            {
                head=tail=newnode;

            }
            else
            {
                newnode->next=head;
                head=newnode;
                

            }
        }
        void push_back(int val)
            {
                node *newnode=new node(val);
                if(head==NULL)
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
                while(temp != NULL)
                {
                        cout<<temp->data<<"->";
                        temp=temp->next;

                }
                cout<<temp->data<<"->NULL";

            }
    };
 int main ()
    {
        list ll;
       int size;
       cout<<"\nenter the size of linked list you wnat to make\n";
       cin>>size;

       for (int i = 0; i < size; i++)
       {     int a;
           cout<<"\nneter the data of node "<<i+1<<" : ";
           
           cin>>a;

           ll.push_back(a);
       }
       cout<<"\nthe linked list you made is \n";
       ll.display();
       return 0;


        
        

        
    }       