#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
        int value;
        Node* next;
        int visitedFlag;
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

        int printReverse(Node* temp)
        {
            if(temp->next == NULL)
            {
                cout<<temp->value<<" ";
                return 0;
            }
            int k = printReverse(temp->next);
            cout<<temp->value<<" ";
        }

        void intersectSortedLinkedList(Node* ptrA, Node* ptrB, LinkedList* z)
        {
            if(ptrA == NULL || ptrB == NULL)
                return;

            if(ptrA->value == ptrB->value)
                z->insertAtHead(ptrA->value);
            else if(ptrA->value < ptrB->value)
                ptrA = ptrA->next;
            else
                ptrB = ptrB->next;
         }

         void deleteNodeOnRight()
         {
             this->reverseLinkedList();
             Node* curr = new Node;
             curr = this->head;
             Node* prev = new Node;
             prev = NULL;

             while(curr->next != NULL)
             {
                 if(curr->value > curr->next->value)
                     curr->next = curr->next->next;
                 else
                    curr = curr->next;
             }

             this->reverseLinkedList();
         }

        void deleteMAfterN(int m, int n)
        {
            int flag = 1;
            int k = 1;
            Node* ptr = new Node;
            ptr = head;
            Node* temp = new Node;
            while(ptr != NULL)
            {
                if(flag == 1)
                {
                    if(k == m)
                    {
                        flag = 0;
                        temp = ptr;
                        ptr = ptr->next;
                        k = 0;
                        continue;
                    }
                    else
                    {
                        ptr = ptr->next;
                        k++;
                    }
                }
                if(flag == 0)
                {
                    if(k == n)
                    {
                        ptr = temp->next;
                        k = 1;
                        flag = 1;
                        continue;
                    }
                    else
                    {
                        temp->next = temp->next->next;
                        ptr = temp->next;
                        k++;
                    }
                }
            }
        }

        void mergeThem(LinkedList* a, int low, int mid, int high)
        {
            int l,m,r, i,j, k;
            int L[mid-low+1], R[high-mid];

            Node* ptr1 = new Node;
            Node* ptr2 = new Node;
            ptr1 = this->head;
            ptr2 = this->head;
            int t = 0;
            while(t < low)
            {
                ptr1 = ptr1->next;
                t++;
            }

            for(i=0;i<mid-low+1;i++)
            {
                L[i] = ptr1->value;
                ptr1 = ptr1->next;
            }

            ptr2 = ptr1;
            for(i=0;i<high-mid;i++)
            {
                R[i] = ptr2->value;
                ptr2 = ptr2->next;
            }

            ptr1 = this->head;
            t = 0;
            while(t < low)
            {
                ptr1 = ptr1->next;
            }

            l = low;
            r = mid+1;
            for(i=low;i<=high;i++)
            {
                if(l == mid-low+1)
                {
                    ptr1->value = R[r];
                    r++;
                    ptr1 = ptr1->next;
                    continue;
                }
                else if(r == high - mid)
                {
                    ptr1->value = L[l];
                    l++;
                    ptr1 = ptr1->next;
                    continue;
                }
                if(L[l] < R[r])
                {
                    ptr1->value = L[l];
                    l++;
                    ptr1 = ptr1->next;
                    continue;
                }
                else if(R[r] <= L[l])
                {
                    ptr1->value = R[r];
                    r++;
                    ptr1 = ptr1->next;
                    continue;
                }

            }
        }

        void mergeSort(LinkedList* a, int low, int high)
        {
            if(low == high)
                return;
            int mid = (low + high) / 2;
            this->mergeSort(a, low, mid);
            this->mergeSort(a, mid+1, high);
            this->mergeThem(a, low, mid, high);
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

        a->printReverse(a->head);
        cout<<endl;

        LinkedList* x = new LinkedList;
        LinkedList* y = new LinkedList;
        LinkedList* z = new LinkedList;

        x->insertAtHead(3);
        x->insertAtHead(7);
        x->insertAtHead(8);
        x->insertAtHead(2);
        x->insertAtHead(1);
        x->insertAtHead(5);
        x->insertAtHead(6);
        x->insertAtHead(4);

        x->mergeSort(x, 0, 7);
        cout<<endl;
        x->printLinkedList();

        /*y->insertAtHead(8);
        y->insertAtHead(6);
        y->insertAtHead(4);
        y->insertAtHead(2);

        x->printLinkedList();
        y->printLinkedList();


        z->intersectSortedLinkedList(x->head, y->head, z);
        z->printLinkedList();*/




}
