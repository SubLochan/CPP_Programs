#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val): data(val),next(NULL) {}
};
class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
        newNode -> next = head;
        head = newNode;
        }

    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    void print(){
        Node* temp = head;
        while(temp){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << " NULL "<< endl;
    }
    void pop_front(){
        if(head){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        }
        else{
            cout << "Empty Linked List" << endl;
            return;
        }
    }
    void pop_back(){
        if(head){
        Node* temp = head;
        while(temp -> next != tail){
             temp =  temp -> next ;
        }
            temp -> next = NULL;
            delete tail;
            tail = temp;
        }
        else{
            cout << "Empty Linked List" << endl;
            return;
        }
    }
    void insert(int val,int pos){
        if(pos < 0){
            cout << "Invalid insert" << endl;  
             return; }
        if(pos == 0){
            push_front(val); 
            return;
        }
            Node* temp = head;
            for(int i=0;i<pos-1;i++)
            {
                if(temp)
                    temp = temp -> next;
                else{
                    cout << "Invalid pos" << endl;
                    return ;
                }
            }
            Node* newNode = new Node(val);
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }   
    
};
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(6);
   ll.print();
   ll.pop_front();
   ll.pop_back();
   ll.insert(5,3);
   ll.print();
  
    return 0;
}