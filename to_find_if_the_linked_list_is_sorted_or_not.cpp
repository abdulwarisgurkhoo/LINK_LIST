/******_______________________________to_find_if_the_linked_list_is_sorted_or_not_______________________________***********/
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
    void is_sorted()
    {
        node *temp,*temp2;
        temp=head;
        temp2=head->next;
        while(temp2!=nullptr)
        {
            if(temp->data > temp2->data)
            {
                cout<<"\nlinked list you entered is not sorted\n";
                return ;

            }
           temp=temp2;
           temp2=temp2->next;

        }
        cout<<"\nthe linked list (";
        display();
        cout<<") is a sorted linked list\n";
        return ;

    }
} ;
int main ()
{
    list ll;
    int count;
    cout<<"\nenter the no. of nodes of linked list you want to create\n";
    cin>>count;
    cout<<"\nenter the data for each node of linked list \n";
    for (int i = 0; i < count; i++)
    {
        cout<<"\nenter the element no. "<<i+1<<" : ";
        int a;
        cin>>a;
        ll.create(a);
    }
    cout<<"\nthe linked list you created is : ";
    ll.display();
    ll.is_sorted();
    return 0;

    
}   