#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Reversing vector using STL" << endl;
    
    // Output the original vector
    cout << "Original vector: ";
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Reverse the vector
    reverse(v.begin(), v.end());

    // Output the reversed vector
    cout << "Reversed vector: ";
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}