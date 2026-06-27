#include <iostream>
using namespace std;
int main(){
    string day;
    cout<<"Was your day good or bad?\n";
    cin>>day;
    switch (day) {
        case good:
            "Glad for you, you deserve success";
        case bad:
            "its alright, every good day is a memory, and every bad day is a lesson that you keep";
        case default:
            "Please enter either good or bad";
    }
return 0;
}
