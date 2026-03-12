#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq; // Create a deque of integers
    dq.push_back(10); // Push 10 to the back of the deque
    dq.push_front(20); // Push 20 to the front of the deque
    dq.push_back(30); // Push 30 to the back of the deque

    cout << "Deque size: " << dq.size() << endl; // Output the size of the deque
    cout << "Front element: " << dq.front() << endl; // Output the front element of the deque
    cout << "Back element: " << dq.back() << endl; // Output the back element of the deque

    dq.pop_front(); // Remove the front element from the deque
    cout << "Front element after pop: " << dq.front() << endl; // Output the new front element after pop

    while(!dq.empty()) { // While the deque is not empty
        cout << "Popping element: " << dq.front() << endl; // Output the front element
        dq.pop_front(); // Remove the front element
    }
    
    cout << "Deque is now empty." << endl; // Indicate that the deque is empty

    return 0;
}