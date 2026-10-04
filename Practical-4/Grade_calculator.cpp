#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your mark out of 100: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade A";
    } else if (marks >= 75){
        cout << "Grade B";
    } else if (marks >= 60){
        cout << "Grade C";
    } else if (marks >= 40){
        cout << "Grade D";
    } else{
        cout << "Fail";
    }

    return 0;
}