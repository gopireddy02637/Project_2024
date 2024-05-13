#include<iostrem>
#include<string>

using namespace std;

class queue
{
    int front;
    int rear;
    int arr[5];
    public:
    queue
    {
        front=-1;
        rear=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0
        }
    }
    bool isempty()
    {
        if(front==-1 && rear==-1)
            return true;
        else
            return false;
    }
    bool isfull()
    {
        if(rear==sizeof(arr)-1)
            return true;
        else
            return false;
    }
    void enqueue(int val)
    {
        if(isfull())
            return 0;
        else if(isempty())
        {
            rear=0;
            front=0;
        }
        else
            rear++;
        arr[rear]=val;
    }
    void dequeue()
    {
        int x=0;
        if(isempty())
            return x;
        else if(front==rear)
        {
            x=arr[front];
            front = rear = -1;
        }
        else
        {
            x=arr[front];
            front++
        }
        return x;
    }
};