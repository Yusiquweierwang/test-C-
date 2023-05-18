#include <iostream>

using namespace std;

int main(){
    int num = 10;
    int * p = &num;
    int ** pp = &p;
    *(*pp) = 20;

    cout << "num = " << num << endl;
    cout << pp << endl;
    cout << p << endl;
    cout << * pp <<endl;
    cout << ** pp <<endl;
    cout << * p <<endl;
    
    

    return 0;
}