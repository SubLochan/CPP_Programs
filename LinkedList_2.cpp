#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class List{
    Node* head;
    Node* tail;

    public :
    List(){
        head = tail = nullptr;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }
        else{
        newNode -> next = head;
        head = newNode;
        }
    }

    void print_list(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout<<"X"<<endl;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = new Node(val);
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == nullptr){
            cout << "List is Empty 😡";
        }
        else{

        
        Node* temp = head;
        head = head -> next;

        temp -> next = nullptr;
        delete temp;
        }
    }

    void pop_back(){
        if(head == nullptr){
            cout << "Empty List 😡";
        }
        else{
        Node* temp = head;
        while(temp -> next  != tail){
            temp = temp -> next;
        }
        temp -> next = nullptr;
        delete tail;
        tail = temp;
    }
    }

};



int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    // ll.push_front(1);
    // ll.print_list();
    // ll.push_front(2);
    // ll.print_list();
    ll.print_list();
    //ll.pop_back();
    ll.push_back(55);
    ll.print_list();

    return 0;
}
