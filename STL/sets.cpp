#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s; // Create a set of integers
    s.insert(10); // Insert 10 into the set
    s.insert(20); // Insert 20 into the set
    s.insert(30); // Insert 30 into the set

    cout << "Set size: " << s.size() << endl; // Output the size of the set
    cout << "Elements in the set: ";
    
    for (int x : s) { // Iterate through the set
        cout << x << " "; // Output each element
    }
    cout << endl;

    s.erase(20); // Remove 20 from the set
    cout << "Set after erasing 20: ";
    
    for (int x : s) { // Iterate through the set again
        cout << x << " "; // Output each element
    }
    cout << endl;

    while(!s.empty()) { // While the set is not empty
        cout << "Removing element: " << *s.begin() << endl; // Output the first element
        s.erase(s.begin()); // Remove the first element
    }

    return 0;
}