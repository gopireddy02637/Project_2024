#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

class SLL
{
  public:
    Node*head;
    
    SLL()
    {
        head=NULL;
    }
    void appandnode(int data)
    {
        Node * newnode = new Node(data);
        
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL)
        {  
            temp= temp->next;
        }
         temp->next=newnode;   
        }
    
    //node at frist;
    void addnodefrist(int data)
    {
         Node* newnode=new Node(data);
         newnode->next=head;
         head=newnode;
         
    }
    
    void printnodes()
    {
        Node* temp= head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ---->";
            temp=temp->next;
        }
    }
    int len(Node* head)
    {
        Node* temp=head;
        int count = 0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    void deleteNode(int nodeOffset)
    {
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;
  
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }
    temp1 = head;
    if (nodeOffset == 1) {
  
        head = head->next;
        delete temp1;
        return;
    }
    while (nodeOffset-- > 1) {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;
    }
    void addatpostion(int pos, int data)
    {
        if( pos == 1 )
                void addnodefrist(int data);
        else
        {
            //create a newnode
            Node *newnode = new Node(data);
            int i=1;
            //start traversal from first node
            Node *trav =head;
            //traverse the list till (pos-1)th node
            while( i < pos-1 ){
                i++;
                trav = trav->next;
            }
            //store an addr of cur (pos)th node into next part of newly created node
            newnode->next = trav->next;
            //store an addr newly created node into the next part of (pos-1)th node
            trav->next = newnode;
        }
    }
    
};
int main()
{
    SLL obj;
    obj.appandnode(10);
    obj.appandnode(20);
    obj.appandnode(30);
    obj.appandnode(40);
    obj.appandnode(50);
    
    //obj.addnodefrist(60);
    
   obj.printnodes();
   cout<<endl;
  // obj.deleteNode(2);
  obj.addatpostion(3, 100);
   obj.printnodes();
   cout<<endl;
    
    
    return 0;
}