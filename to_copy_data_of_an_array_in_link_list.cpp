/**********************************to_copy_data_of_an_array_in_link_list************************/
#include<iostream>
using namespace std;
struct node 
    {
        int data;
        struct node *next;
    };
void display (struct node *p) 
    {
        cout<<"\nyour link list is :";
        while(p!=NULL)
            {
                cout<<p->data<<" --> ";
                p=p->next;
            }
            cout<<"NULL";
    }
void create (int arr [],int count)
    {
        struct node *head,*temp,*last;
        head=new node;
        head->data=arr[0];
        head->next=0;
        
        last=head;
        for (int i = 1; i < count; i++)
        {
            temp=new node;
            temp->data=arr[i];
            temp->next=NULL;
            last->next=temp;
            last=temp;


        }
         display(head);

     }

       
        

    
int main ()
    {
        int size ;
        cout <<"\n enter the size of array \n";
        cin>>size;
        int arr[size];
        cout<<"\n enter the elements of array\n";
        for (int i = 0; i < size; i++)
        {
            cout<<"\nenter element no. "<<i+1<<" : ";
            cin>>arr[i];
        }
        create(arr,size);
        return 0;

        
    }