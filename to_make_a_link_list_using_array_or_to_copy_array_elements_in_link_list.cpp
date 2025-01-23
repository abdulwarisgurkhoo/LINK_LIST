/***********--------------to_make_a_link_list_using_array_or_to_copy_array_elements_in_link_list-------------------***************/
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
    void create(int val)
    {
        node *newnode = new node(val);
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
        node *temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"null";

    }
    void make(int arr[],int count)
    {
        for (int i = 0; i < count; i++)
        {
            create(arr[i]);
        }
        
    }
};
void print(int arr[],int count)
{
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main ()
{
    list ll;
    int size;
    cout<<"\nenter the size of array \n";
    cin>>size;
    int arr[size];
    cout<<"\nenter the elements of array \n";

    for(int i = 0; i < size; i++)
    {
        cout<<"\nenter elements no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\nthe array you entered is : ";
    print(arr,size);
    // for (int i = 0; i < size; i++)
    // {
    //     ll.create(arr[i]);
    // }
    ll.make(arr,size);
    cout<<"\nthe linked that has been created from array you entered  is \n";
    ll.display();
    return 0;


    
}