//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    string status;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 20){
        int height;
        cout << "Enter your height: ";
        cin >> height;
        if (height < 160){
            status = "UNFRIEND";
        } else if (height < 175){
            status = "FRIEND";

        } else {
            int wealth;
            cout << "Enter your wealth: ";
            cin >> wealth;
            if (wealth > 69000000){
                status = "MARRIED";
            } else {
                status = "ONE-NIGHT-STAND";
            }
        }

    } else if (age < 30){
        int wealth;
        cout << "Enter you wealth: ";
        cin >> wealth;
        if (wealth > 10000000){
            status = "BEST FRIEND";
        } else {
            status = "UNFRIEND";
        }

    } else {
        status = "UNFRIEND";
    }

    cout << "status = " << status << endl;
}