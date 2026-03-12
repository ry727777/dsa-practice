#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q; // create a queue of integers
    q.push(10); // push 10 onto the queue
    q.push(20); // push 20 onto the queue
    q.push(30); // push 30 onto the queue
    cout << "Queue size: " << q.size() << endl; // output the size of the queue
    cout << "Front element: " << q.front() << endl; // output the front element of the queue
    cout << "Back element: " << q.back() << endl; // output the back element of the queue
    q.pop(); // remove the front element from the queue
    cout << "Front element after pop: " << q.front() << endl; // output the new front element after pop
    while(!q.empty()) { // while the queue is not empty
        cout << "Popping element: " << q.front() << endl; // output the front element
        q.pop(); // remove the front element
    }
}