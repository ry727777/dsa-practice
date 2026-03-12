#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "revising vector stl   " << endl;
    cout << v.size() << endl; // Output the size of the vector
    cout << v[2] << endl; // Output the third element of the vector
    cout << v.at(3) << endl; // Output the fourth element of the vector using at()

    cout << "Reversing vector using STL" << endl;
    
    // Output the original vector
    cout << "Original vector: ";
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Reverse the vector
    reverse(v.begin(), v.end());

    sort(v.begin(), v.end()); // Sort the vector in ascending order

    sort(v.begin(), v.end(), greater<int>()); // Sort the vector in descending order

    // Output the reversed vector
    cout << "Reversed vector: ";
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}