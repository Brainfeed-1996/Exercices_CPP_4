#include <iostream>
using namespace std;
main()
{
    int n = 5, p = 9;
    int q;
    float x;

    q = n < p;
    cout << q  << endl; //1
    p = n == p;
    cout << p  << endl; //0
    q = p % n + p > n; 
    cout << q  << endl; //0
    x = p / n; 
    cout << x << endl; //0
    x = (float)p / n; 
    cout << x << endl; //0
    x = (p + 0.5) / n; 
    cout << x << endl; //0.1
    x = (int)(p + 0.5) / n; 
    cout << x << endl; //0
    q = n * (p > n ? n : p); 
    cout << q << endl; //0
    q = n * (p < n ? n : p);
    cout << q << endl; //25

}
