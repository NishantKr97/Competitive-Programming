#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
        int value;
        Node* next;
};

class LinkedList
{

    public:
        Node* head;

    public:

        LinkedList()
        {
            head = NULL;
        }

        void insertAtHead(int n)
        {
            Node* temp = new Node;
            temp->value = n;
            temp->next = head;
            head= temp;
        }

        void insertAtIndex(int i, int n)
        {
            Node* temp = new Node;
            Node* ptr;
            ptr = head;

            if(i == 1)
            {
                insertAtHead(n);
                return;
            }


            i--;
            while(--i)
            {
                if(ptr == NULL)
                {
                    cout<<"Exceeded List Size\n";
                    return;
                }
                ptr = ptr->next;
            }

            temp->value = n;
            temp->next = ptr->next;
            ptr->next = temp;


        }

        void deleteAtIndex(int i)
        {
            Node* ptr = new Node;
            ptr = head;

            if(i == 1)
            {
                head = head->next;
                return;
            }

            --i;
            while(--i)
            {
                ptr = ptr->next;
            }
            ptr->next = ptr->next->next;
        }

        void printLinkedList()
        {
            Node* temp = new Node;
            temp = head;

            while(temp!= NULL)
            {
                cout<<temp->value<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }

        int lengthOfList(Node* temp, int i)
        {
            if(temp == NULL)
                return i;
            else
            {
                i++;
                lengthOfList(temp->next, i);
            }

        }

        void swapNodes(int x, int y)
        {
            Node* ptr1;
            Node* ptr2;
            ptr1 = ptr2 = head;

            while()
        }
};

int main()
{
        LinkedList* a = new LinkedList;
        a->insertAtHead(1);
        a->insertAtHead(2);
        a->insertAtHead(3);
        a->printLinkedList();
        cout<<a->head->value<<endl;

        a->insertAtIndex(2, 4);
        a->insertAtIndex(3, 5);
        a->insertAtIndex(1, 6);
        a->printLinkedList();

        int s = a->lengthOfList(a->head, 0);
        cout<<"Size of the List : "<<s<<endl;

        a->deleteAtIndex(2);
        a->printLinkedList();

        a->deleteAtIndex(1);
        a->printLinkedList();

        s = a->lengthOfList(a->head, 0);
        cout<<"Size of the List : "<<s<<endl;
}
