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
            Node* ptrX_prev = new Node;
            Node* ptrX_curr = new Node;
            Node* ptrY_prev  = new Node;
            Node* ptrY_curr = new Node;
            ptrX_curr = head;
            ptrY_curr = head;
            ptrX_prev = NULL;
            ptrY_prev = NULL;

           while(ptrX_curr && ptrX_curr->value != x)
           {
               ptrX_prev = ptrX_curr;
               ptrX_curr = ptrX_curr->next;
           }

           while(ptrY_curr && ptrY_curr->value != y)
           {
               ptrY_prev = ptrY_curr;
               ptrY_curr = ptrY_curr->next;
           }

           if(ptrX_curr == NULL || ptrY_curr == NULL)
           {
               cout<<"Enter valid swapping values!!!\n";
               return;
           }


           if(ptrX_prev != NULL)
               ptrX_prev->next = ptrY_curr;
           else
               head = ptrY_curr;

           if(ptrY_prev != NULL)
               ptrY_prev->next = ptrX_curr;
           else
               head = ptrX_curr;

            Node* temp = ptrX_curr->next;
            ptrX_curr->next = ptrY_curr->next;
            ptrY_curr->next = temp;

        }

        void deleteHead()
        {
            free(head);
        }

        void reverseLinkedList()
        {
            Node* prev = new Node;
            Node* curr = new Node;
            Node* Next = new Node;

            prev = NULL;
            curr = head;

            while(Next != NULL)
            {
               Next = curr->next;
               curr->next = prev;
               prev = curr;
               curr = Next;
            }

            head = prev;

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

        a->swapNodes(1,6);
        a->printLinkedList();

        int s = a->lengthOfList(a->head, 0);
        cout<<"Size of the List : "<<s<<endl;

        a->deleteAtIndex(2);
        a->printLinkedList();

        a->reverseLinkedList();
        a->printLinkedList();


}
