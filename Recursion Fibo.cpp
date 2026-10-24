#include <iostream>
using namespace std;

// fib function banaiya diya ase Fibonacci number ber korar jonno
int fib(int n) {
    if(n==0) // jodi n 0 hoi, taile return kor 0
        return 0;

    if(n==1) // jodi n 1 hoi, taile return kor 1
        return 1;

    // na hole recursive call: fib(n-1) + fib(n-2)
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter n: "; // user k prompt dila n input korar jonno
    cin >> n; // input read korse

    // loop 0 theke n porjonto cholbe
    for(int i=0; i<=n; i++){
        cout << fib(i) << " "; // prottek i er Fibonacci number print korse
    }

    return 0; // program sesh
}
