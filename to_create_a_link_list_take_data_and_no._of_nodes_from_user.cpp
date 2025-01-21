/*****************************************to_create_a_link_list_take_data_and_no._of_nodes_from_user.cpp************************/
#include<iostream>
using namespace std;
struct node
    {
        int data;
        struct node *next;
    };
int main ()
    {
        struct node *head,*temp,*last;
        head=new node;
        head=0;
        last=head;
        int count;
        cout<<"\nenter the node of node \n";
        cin>>count;
        for (int i = 0; i < count; i++)
        {
            int num;
            cout<<"\nenter the data of ist node :";
            cin>>num;
            temp=new node;

            if(head==0)
            {
                head->data=num;
            }
            else
            {
                
            }
        }
        
    }
