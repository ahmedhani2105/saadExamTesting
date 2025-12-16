#include <iostream>
using namespace std;

int mul(int a, int c);
int sum(int a, int b);

int main(){
    string clientName;

    cout << "Enter ur UserName: ";
    cin >> clientName;
    
    cout << "Hi, " << clientName << '\n';


    return 0;
}

int sum(int a, int b){
    return a + b;
}

int mul(int a, int c){
    return a * c;
}