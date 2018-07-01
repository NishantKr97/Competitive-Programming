#include<bits/stdc++.h>
using namespace std;

void swap(int* n, int* m)
{
    int temp = *n;
    *n = *m;
    *m = temp;
}

int n = 0;

class MinHeap
{
    int *harr;
    int capacity;
    int heap_size;

    public:
    MinHeap(int capacity);

    void minHeapify(int );

    int parent(int i)
    {return (i-1) / 2;}

    int left(int i)
    {return (2*i)+1;}

    int right(int i)
    {return (2*i)+2;}

    int extractMin();

    int getMin()
    {return harr[0];}

    void insert(int k);

    void deleteIndex(int i);

    void decreaseKey(int, int);

    void printHeap();

    void heapSort();

};


MinHeap::MinHeap(int cap)
{
    heap_size = 0;
    capacity = cap;
    harr = new int[cap];
}

void MinHeap::minHeapify(int i)
{
    int l = left(i);
    int r = right(i);

    int smallest = i;
    if(l < heap_size && harr[l] < harr[i])
        smallest = l;
    if(r < heap_size && harr[r] < harr[smallest])
        smallest = r;

    if(smallest != i)
    {
        swap(&harr[smallest], &harr[i]);
        minHeapify(smallest);
    }
}


void MinHeap::insert(int k)
{
    if(heap_size == capacity)
    {
        cout<<"\nOverflow!!!";
        return;
    }

    int i = heap_size;
    heap_size++;
    harr[i] = k;

    while(i != 0 && harr[i] < harr[parent(i)])
    {
        swap(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }
}

    int MinHeap::extractMin()
    {
        if(heap_size <= 0)
            return INT_MIN;

        if(heap_size == 1)
        {
            int root = harr[0];
            heap_size--;
            return root;
        }

        int root = harr[0];
        harr[0] = harr[heap_size-1];
        heap_size--;
        minHeapify(0);
        return root;
    }

    void MinHeap::decreaseKey(int i, int new_val)
    {
        harr[i] = new_val;
        while(i != 0 && harr[i] < harr[parent(i)])
        {
            swap(&harr[i], &harr[parent(i)]);
            i = parent(i);
        }
    }

    void MinHeap::deleteIndex(int i)
    {
        decreaseKey(i, INT_MIN);
        extractMin();
    }

    void MinHeap::printHeap()
    {
        cout<<"Currently the min heap is :\n";
        for(int i = 0;i<heap_size;i++)
            cout<<harr[i]<<" ";
        cout<<endl;
    }

    void MinHeap::heapSort()
    {
        int j = capacity - 1;
        while(heap_size)
        {
            int k = extractMin();
            //cout<<heap_size<<" ";
            harr[j] = k;
            //cout<<k<<" "<<j<<endl;
            j--;
        }

        cout<<"Sorted Array is : ";
        for(int i=capacity-1;i>=j+1;i--)
            cout<<harr[i]<<" ";
        cout<<endl;
    }

int main()
{
    MinHeap h(10);
    h.insert(6);
    h.insert(10);
    h.insert(4);
    h.insert(7);
    h.insert(8);

    h.printHeap();

    cout<<"getMin() = "<<h.getMin()<<endl;
    //h.extractMin();
    //h.printHeap();

    //h.deleteIndex(2);
    //h.printHeap();

    h.heapSort();
    //h.printHeap();
}



