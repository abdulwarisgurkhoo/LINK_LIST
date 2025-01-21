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
class link
    {
        public :
        node *head,*last;
        link()
        {
            head=NULL;
            last=NULL;
        }

        void push_f(int num)
        {
            node *temp=new node(num);
            if(head==NULL)
            {
               head=last=temp;


            }
            else
            {
                temp->next=head;
                head=temp;

            }

        }
    
       void push_b(int num)
        {
            node *temp=new node(num);
            if(head==NULL)
                {
                    head=last=temp;

                }
                else
                {
                    last->next=temp;
                    last=temp;
                }
        }
        void insert(int pos,int num)
        {
            node *t=head;
            node *newnode=new node(num);
           
            for (int i = 0; i < pos-1; i++)
            {
                t=t->next;
            }
            newnode->next=t->next;
            t->next=newnode;
            

        }
        void display()
        {
            node *r=head;
            while(r->next != NULL)
            {
                cout<<r->data<<"->";
                r=r->next;
            }
            cout<<r->data<<"->null";
        }
    }ll;
    int main ()
        {
              for (int i = 0; i < 10; i++)
              {
                int a;
                cout<<"enter "<<i+1;
                cin>>a;
                ll.push_b(a);


              }
              ll.display();
              int num,pos;
              cout<<"\nenter number \n";
              cin>>num;
              cout<<"\nenter the position \n";
              cin>>pos;
              ll.insert(pos,num);
              cout<<"\n after insert    \n";
              ll.display();

              return 0;

        }
