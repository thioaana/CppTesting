#include <iostream>
using namespace std;

int main(){
    int x = 5;
    cout << "Form outer scope x = "<< x << endl;
    
    {
        int x = 10;
        cout << "Form inner scope x = "<< x << endl;
    }
    for(int i = 0; i < 2; i++){
        cout << i << endl;
    }
    cout << i << endl;

    cout << "Form outer scope again x = "<< x << endl;
    return 0;
}