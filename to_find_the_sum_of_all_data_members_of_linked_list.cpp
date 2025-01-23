/****************************to_find_the_sum_of_all_data_members_of_linked_list.cpp******************************/
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
            cout<<"\nthe linked list you created is :\n";
            node *temp =head;
            while(temp != nullptr)
            {
                cout<<temp->data<<" -> ";
                temp=temp->next;
            }
            cout<<"null";
        }
        void sum()
        {
            node *temp=head;
            int sum=0;
            while(temp != nullptr)
            {
                sum=sum+temp->data;
                temp=temp->next;
            }
            cout<<"\nthe sum of the data present in link_list you entered is : "<<sum;
        }
        
    };
    int main ()
    {
        list ll;
        int count;
        cout<<"\nenter the no of node of link list \n";
        cin>>count;
        cout<<"\nenterv the elements of linked list \n";
        for (int i = 0; i < count; i++)
        {
            int a;
            cout<<"\nenter the element no. "<<i+1<<"  ";
            cin>>a;
            ll.create(a);

        }
        ll.display();
        ll.sum();
        return 0;
        


        
    }    