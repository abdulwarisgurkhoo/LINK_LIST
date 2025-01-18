/****************************creation_and_display_of_ll.cpp******************************/
#include<iostream>
using namespace std;

struct node 
    {
        int data;
        struct node *next;
    };
    void display (struct node * head)
    {
        struct node *temp=head;
        while(temp!=0)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }

    }

int main ()
    {
        struct node *head;
        struct node *n1=new node;
         struct node *n2=new node;
          struct node *n3=new node;
           struct node *n4=new node;
            struct node *n5=new node;
            head=n1;
            n1->data=100;
            n1->next=n2;
             n2->data=800;
            n2->next=n3;
             n3->data=13200;
            n3->next=n4;
             n4->data=19000;
            n4->next=n5;
             n5->data=12100;
            n5->next=0;
            display(head);
            return 0;
            


    }    