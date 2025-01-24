/******************************to_reverse_the_linked_list_using_auxillary_array***********************************/
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        this->data = val;
        this->next = nullptr;
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
    int count()
    {
        int i = 0;
        node *temp = head;
        while (temp != nullptr)
        {
            i++;
            temp = temp->next;
        }
        return i;
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
    void reverse()
    {
        int p = count();
       
        int arr[p];
        for (int i = 0; i < p; i++)
        {
           arr[i]=0;
        }
        
        node *temp = head;
       for (int i = 0; i < p; i++)
       {
             arr[i]=temp->data;
             temp=temp->next;
       }
    
       node *temp2=head;
        for (int i = p - 1; i >= 0; i--)
        {
           temp2->data=arr[i];
           temp2=temp2->next;
        }
    }
};
int main()
{
    list ll;
    int count;
    cout << "\nenter the no. of node\n";
    cin >> count;
    cout << "\nenter the data for each node of list\n";
    for (int i = 0; i < count; i++)
    {
        int a;
        cout << "\nenter the data for node " << i + 1 << " : ";
        cin >> a;
        ll.create(a);
    }
    cout << "\nthe link list you created is : ";
    ll.display();
    cout << "\nthe reverse of the link list is : ";

    ll.reverse();
    ll.display();
    return 0;
}