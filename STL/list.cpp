#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> myList; // Create a list of integers
    myList.push_back(10); // Add 10 to the end of the list
    myList.push_front(20); // Add 20 to the front of the list
    myList.push_back(30); // Add 30 to the end of the list

    cout << "List size: " << myList.size() << endl; // Output the size of the list
    cout << "Front element: " << myList.front() << endl; // Output the front element of the list
    cout << "Back element: " << myList.back() << endl; // Output the back element of the list

    myList.pop_front(); // Remove the front element from the list
    cout << "Front element after pop: " << myList.front() << endl; // Output the new front element after pop

    auto it = find(myList.begin(), myList.end(), 4); // Create an iterator to the beginning of the list
    if (it != myList.end()) { // Check if the element 4 is found
        cout << "Element 4 found in the list." << endl; // Output if found
    } else {
        cout << "Element 4 not found in the list." << endl; // Output if not found
    }

    while (!myList.empty()) { // While the list is not empty
        cout << "Popping element: " << myList.front() << endl; // Output the front element
        myList.pop_front(); // Remove the front element
    }

    cout << "List is now empty." << endl; // Indicate that the list is empty

    return 0;
}