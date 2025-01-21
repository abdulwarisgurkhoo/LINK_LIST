/************************************linked_list_print_using_outer_function.cpp*******************************/
#include<iostream>
using namespace std;
class node
    {
        public :
        int data;
        node *next;
        node(int val)
        {
         this-> data=val;
         this-> next=NULL;
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


void push_front(int val)
{
    node *newnode = new node (val);
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
void push_end(int val)
{
    node *temp=new node(val);
    if(head==nullptr)
    {
        head=tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}
void push_middle(int pos,int val)
{
    if(pos<0)
    {
        cout<<"\nthe index you enter is invalid please try again \n";
        return ;
    }
    else
    {
       node *newnode=new node(val);
       node *t=head;
       int i = 0;
       while(t->next != nullptr)
       {
        i++;
        t=t->next;
       }
       newnode->next=t->next;
       t->next=newnode;

        
    }
}
void display()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->data << "->";
            t = t->next;
        }
        cout << t->data << "->NULL";
    }
 
};
void print(node *start)
{    node *temp=start;
    
    while(temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
   cout<<"null";
}
int main ()
{
    list ll;
   
    ll.push_end(1);
     ll.push_end(2);
      ll.push_end(3);
       ll.push_end(4);
        ll.push_end(5);
      //  ll.display();
       print(ll.head);
        return 0;

}   