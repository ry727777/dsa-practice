#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){

    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class linked_list
{
    private:
    Node* head;
    Node* tail;
    int length;

    public:
    linked_list(){
        head = NULL;
        tail = NULL;
        length = 0;
    }
    void addAthead(int val){
        length++;
        if(head == NULL){
            head = new Node(val);
            tail = head;
            return;
        }
        Node* tmp = new Node(val);
        tmp->next = head;
        head = tmp;
    }

    void traverse(){
        Node* temp = head;
        while (temp)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void addAtTail(int data){
        length++;
        if(tail == NULL){
            tail = new Node(data);
            head = tail;
            return;
        }
        Node* tmp = new Node(data);
        tail->next = tmp;
        tail = tmp;
    }

    int get(int index){
        if(index == 0){
            return head->data;
        }
        if(index == length-1){
            return tail->data;
        }
        Node* tmp = head;
        int count = 0;
        while (tmp)
        {   
            if(count == index){
                return tmp->data;
            }
            count++;
            tmp = tmp->next;
        }
        return -1;
    }

    void deleteAtIndex(int index){
        if(index <0 || index >=length)
          return;
        
        length--;
        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        int count = 0;
        Node* tmp = head;
        Node* prev = NULL;
        while (tmp)
        {   
            if(count == index){
                prev->next = tmp->next;
                delete tmp;
                return;
            }
            count++;
            prev = tmp;
            tmp = tmp->next;
        }
    }
    int size(){
        return length;
    }
};


int main(){
    linked_list temp;
    temp.addAthead(5);
    temp.addAthead(6);
    temp.addAthead(7);
    temp.traverse();
    cout<<endl;
    temp.addAtTail(10);
    temp.addAtTail(11);
    temp.traverse();
    cout<<endl;
    cout<<temp.get(2)<<endl;
    cout<<temp.size()<<endl;
    temp.deleteAtIndex(4);
    cout<<temp.get(2)<<endl;
    cout<<temp.size()<<endl;
    temp.traverse();
}