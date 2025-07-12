#include<iostream>
using namespace std;

void solve(int n, char from_rod, char to_rod, char aux_rod){
    if(n == 0)
      return;
    solve(n-1, from_rod, aux_rod, to_rod);
    cout<<"Disk "<<n<<" move "<<from_rod<<" to "<<to_rod<<endl;
    solve(n-1, aux_rod, to_rod, from_rod);
}

int main(){
    int n = 1000;
    solve(n, 'A', 'C', 'B');
}

/*
Logic
move n-1 rod from 'A' to B(auxiliary rod) using target rod 'C'
move n(last disk bigger) from rod 'A' to target rod 'C'
move n-1 rod from 'B'(aux rod) to target rod 'C' using rod 'A'
*/