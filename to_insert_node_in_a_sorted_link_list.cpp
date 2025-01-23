/************************************to_insert_node_in_a_sorted_link_list***************************************/
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class list
{
public:
    node *head, *tail;
    list()
    {
        head = nullptr;
        tail = nullptr;
    }
    void display()
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "null";
    }
    void create(int val)
    {
        node *newnode = new node(val);
        if (head == nullptr)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void insert(int val)
    {
       node *newnode =new node (val);
       node *temp=head;
       if(head->data > val)
       {
            newnode->next=head;
            head=newnode;
            return ;
       }
       else if ( val > head->data && val <tail->data)
       {
         while (!(temp->next->data > val))
         {
            temp=temp->next;
         } 
         newnode->next=temp->next;
         temp->next=newnode;
         return ;
       }
        else if (val > tail->data)
        {
            tail->next=newnode;
            tail=newnode;
            return ;
        }
        
    }
};
int main()
{
    list ll;
    int count;
    cout << "\nenter the no. of nodes in linked list \n";
    cin >> count;
    cout << "\nenter the data for each node of an sorted link list linked list\n";
    for (int i = 0; i < count; i++)
    {
        cout << "\nenter the data for node " << i + 1 << " : ";
        int a;
        cin >> a;
        ll.create(a);
    }
    cout << "\nthe link list you created is: ";
    ll.display();
    int num;
    cout << "\nenter the value for the node that you want to insert in the linked list\n";
    cin >> num;
    ll.insert(num);
    cout << "\nthe link list after the insertion is : ";
    ll.display();
    return 0;
}
