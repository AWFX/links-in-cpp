#include <iostream>
using namespace std;

int main(){
    int var;
    int &link = var;
    cout << "Enter number: ";
    cin >> var;
    cout << "Your number: " <<  var << " Your link: " << link << endl;
    cout << "Enter new number: ";
    cin >> link;
    cout << "Your number: " <<  var << " Your link: " << link << endl;
    return 0;
}