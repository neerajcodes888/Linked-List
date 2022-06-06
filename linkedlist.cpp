#include <iostream> 
using namespace std;
struct node
{
    int e;
    struct node *next;
};
struct node *head = NULL, *ptr;
void insertAtBegin()
{
    struct node *temp=new node;
    int data;
    cout<<endl<<"Enter data:";
    cin >> data;
    temp->e = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        cout << data << " inserted into begining of linked list";
    }
    else
    {
        temp->next = head;
        head = temp;
        cout << data << " inserted into begining of linked list";
    }
}
void insertAtBottom()
{
    struct node *temp;
    int data;
    cout<<endl<< "Enter data:";
    cin >> data;
    temp = new node;
    temp->e = data;
    temp->next = NULL;
    if (head == NULL)
    {
      head=temp;
      cout << data << " inserted into bottom of linked list";
    }
    else
    {
       ptr=head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        cout << data << " inserted into bottom of  linked list";
    }
}
void insertAtRandom()
{
      struct node *temp;
  
    temp = new node;
      int data,l;
       cout<<"Enter Location:";
    cin>>l;
    cout << endl<< "Enter data:";
    cin >> data;
   
    temp->e = data;
    if(head==NULL)
    {
        head=temp;
        cout<<data<<" inserted just after element "<<l<<" in the Linked List";
    }
    else
    {
        ptr=head;
        while(ptr->e!=l)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
        cout<<data<<" inserted just after element "<<l<<" in the Linked List";
    }
}
void deleteFromBegin()
{
    if (head == NULL)
    {
        cout << "Underflow!No elements there";
    }
    else
    {
        
        ptr = head;
        cout <<ptr->e<<" deleted from begining side in the linked list";
        head = head->next;
        ptr->next = NULL;
        delete (ptr);
    }
}
void deleteFromBottom()
{
    if (head == NULL)
    {
        cout <<"Underflow!No elements there";
    }
    else
    {
       
        struct node *prev;
        ptr=head;
        
        while (ptr->next != NULL)
        {
            prev=ptr;
            ptr=ptr->next;
        }
         cout <<ptr->e<<" deleted from bottom side in the linked list";
        prev->next = NULL;
        
        delete (ptr);
    }
}
void deleteFromRandom()
{
    int data;
    cout<<"Enter existing element to delete:";
    cin>>data;
  if (head == NULL)
    {
        cout << "Underflow!No elements there";
    }  
    else{
    struct node *temp;
    ptr=head;
while(ptr->e!=data)
    {
temp=ptr;
ptr=ptr->next;
    }
    temp->next=ptr->next;
     cout <<ptr->e<<" deleted from begining side in the linked list";
    delete(ptr);
    }
}
void display()
{
    if (head == NULL)
    {
        cout << "Linked List is Empty currently!";
    }
    else
    {
        ptr = head;
        cout<<endl<< "-------------------------------------" << endl;
        cout << "Linked List Elements:";
        while (ptr != NULL)
        {
            cout << ptr->e << " ";
            ptr = ptr->next;
        }
        cout << endl<< "----------------------------------------";
    }
}
int main()
{
    int ch;
     cout << "\n\n\t\t-------------------Linked List Menu---------------------------";
     cout << "\n\t\t\t1).Insertion At The begining";
     cout << "\n\t\t\t2).Insertion At The bottom";
      cout << "\n\t\t\t3).Insertion At The Random";
     cout << "\n\t\t\t4).Deletion At The begining";
     cout << "\n\t\t\t5).Deletion At The bottom";
     cout << "\n\t\t\t6).Deletion At The Random";
     cout << "\n\t\t\t7).Display Linked List";
     cout << "\n\t\t\t8).Enter 0 to Exit the Menu";
    while (ch != 0)
    {
        cout << endl
             << "Enter choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insertAtBegin();
            break;
        case 2:
            insertAtBottom();
            break;
        case 3:
           insertAtRandom();
            break;
        case 4:
            deleteFromBegin();
            break;
        case 5:
            deleteFromBottom();
            break; 
            case 6:
            deleteFromRandom();
            break;
            case 7:
            display();
            break;
        case 0:{
            cout<<"Exited from Menu";
            exit(0);
        }
            break;
        default:
            cout << "Invalid Response!";
        }
		    }
}