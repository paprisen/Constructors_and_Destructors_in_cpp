// Papri Sen
// 24070123070
// A3
#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date();        
    void display();
};


Date::Date() {
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}

void Date::display() {
    cout << "Date: " << day << "-" << month << "-" << year << endl;
}

int main() {
    Date d;     
    d.display(); 
}

/*
Output:
Enter day: 7
Enter month: 8
Enter year: 2025
Date: 7-8-2025
*/
