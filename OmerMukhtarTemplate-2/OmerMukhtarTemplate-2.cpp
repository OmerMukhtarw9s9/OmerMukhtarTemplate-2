// Omer Mukhtar
// CIS 1202 
// Aug 1st, 2021 

#include <iostream>
using namespace std;


//This uses  template to receive and return any of the data type value



template<typename T> T half(T val) {
    return val / 2;
}
int half(int val) {
    if (val % 2 == 0) return val / 2;
    else return (int)(val / 2) + 1; // increases number
} // return value

int main() // main function
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}