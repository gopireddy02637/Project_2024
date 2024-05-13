#include<iostream>
#include<string>

using namespace std;

class stack
{
    int top;
    int arr[5];
    public:
    stack()
    {
        top==-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    bool isempty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isfull()
    {
        if(top==4)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if(isfull())
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }
    int pop()
    {
        int popvalue;
        if(isempty())
        {
            cout<<"stack underflow"<<endl;
            return 0;
        }
        else
        {
            popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    int Count()
    {
        return (top+1);
    }
    int peek(int pos)
    {
        if(isempty())
        {
            cout<<"stack underflow"<<endl;
            return 0;
        }
        else
        return arr[pos];
    }
    void change(int pos , int val)
    {
        arr[pos]=val;
        cout<<"iteam changed at llocation"<<pos<<"is"<<val<<endl;
    }
    void dispaly()
    {
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    stack obj;
    int opt,pos,val;

    do
    {   cout<<"click option"<<endl;
        cin>>opt;
        switch(opt)
        {   case 0:
                break;
            case 1:
                cout<<"push"<<endl;
                cin>>val;
                obj.push(val);
                break;
            case 2:
                cout<<"pop";
                obj.pop();
                break;
            case 3:
                cout<<"change value";
                cin>>val;
                obj.change(2,val);
                break;
            case 4:
                obj.dispaly();
                break;
        }
    }while(opt!=0);
    
    return 0;
}