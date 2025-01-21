/******************************creation display and insertion in linked list********************/
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
        this->next = 0;
    }
};
class linklist
{
public:
    node *head, *tail;
    linklist()
    {
        head = NULL;
        tail = NULL;
    }

    void insert(int pos, int num)
    {
        if (pos < 0)
        {
            cout << "\ninvalid index\n";
            return;
        }

        else
        {
            cout << "\nthe new linked list after inserting the new node is \n";

            node *r = new node(num);
            node *t = head;
            int i;
            for (i = 0; i < pos - 1; i++)
            {
                t = t->next;
            }
            r->next = t->next;
            t->next = r;
        }
    }
    void in_append(int num)
    {
        node *newnode = new node(num);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void in_last(int num)
    {
        node *newnode = new node(num);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void cal()
    {
        cout << "\n the total no. of nodes your linked list has : ";
        node *n = head;
        int i = 0;

        while (n->next != NULL)
        {
            i++;
            n=n->next;
        }

        cout << i;
    }
    void display()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->data << "->";
            t = t->next;
        }
        cout << t->data << "->NULL";
    }
};
int main()
{
    linklist ll;
    int count;
    cout << "\nenter the no. of nodes ";
    cin >> count;
    for (int i = 0; i <= count; i++)
    {
        int a;
        cout << "\nenter the data of node no. " << i + 1 << " : ";
        cin >> a;
        ll.in_last(a);
    }
    ll.cal();
    cout<<endl;
    cout << "\nthe link list you enter is \n";
    ll.display();
    cout << "\nenter position at which you want to insert the new node\n";
    int pos;
    cin >> pos;
    int num;
    cout << "\nenter the value of that node \n";
    cin >> num;
    ll.insert(pos, num);

    ll.display();
    ll.cal();
    return 0;
}
