#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s; // Create a stack of integers
    s.push(10); // Push 10 onto the stack
    s.push(20); // Push 20 onto the stack
    s.push(30); // Push 30 onto the stack

    cout << "Stack size: " << s.size() << endl; // Output the size of the stack
    cout << "Top element: " << s.top() << endl; // Output the top element of the stack
    s.pop(); // Remove the top element from the stack
    cout << "Top element after pop: " << s.top() << endl; // Output the new top element after pop
    
    while(!s.empty()) { // While the stack is not empty
        cout << "Popping element: " << s.top() << endl; // Output the top element
        s.pop(); // Remove the top element
    }
    cout << "Stack is now empty." << s.size() <<endl; // Indicate that the stack is empty
}