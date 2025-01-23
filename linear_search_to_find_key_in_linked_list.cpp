  /**************************linear_search_to_find_key_in_linked_list.cpp*********************/
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
        void key(int val)
        {
            node *temp=head;
            int i=1;
            while(temp != nullptr)
            {
               if(temp->data == val )
               {
                cout<<"\nkey : "<<val<<" is present in linked list at node no. "<<i;
                return ;

               }
               i++;
            temp=temp->next;
            }
            cout<<"\nsorry the number you entered is not present in linked list \n";
        }
        
    };
    int main ()
    {
        list ll;
        int count,num;
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
        cout<<"\nenter the no. that you want to search in linked list \n";
        cin>>num;
        ll.key(num);
        return 0;
        


        
    }    