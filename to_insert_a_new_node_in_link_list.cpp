/*********************************to insert new node in linked list******************/
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
    int count()
    {
        node *temp = head;
        int i = 1;
        while (temp != nullptr)
        {
            i++;
            temp = temp->next;
        }
        return i;
    }
    void insert(int val)
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
    void insert_mid(int num, int pos)
    {
        node *temp = head;
        node *newnode = new node(num);
        if (head == nullptr)
        {
            head = tail = newnode;
        }
        else if (pos == 0)
        {
            newnode->next = head;
            head = newnode;
        }
        else if (pos < 0 || pos > count())
        {
            cout << "\ninvalid index or node no. of node its out of bound try again\n  ";
        }
        else
        {
            int i = 0;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
          
        }
        cout << "\nthe linked list is after the insertion of newnode is : ";
            display();
            return ;
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
};
int main()
{
    list ll;
    int count;
    cout << "\nenter the no. of node you want to create\n";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int a;
        cout << "\nenter the data for node " << i + 1 << " : ";
        cin >> a;
        ll.insert(a);
    }
    cout << "\nthe linked list you created is \n";
    ll.display();
    int num, pos;
    cout << "\nenter the val you want of insert\n";
    cin >> num;
    cout << "\n enter the node no. at which you want to insert the newnode\n";
    cin >> pos;
    ll.insert_mid(num, pos);

    return 0;
}