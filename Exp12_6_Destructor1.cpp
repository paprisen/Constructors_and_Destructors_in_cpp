// Papri Sen
// 24070123070
// A3
#include <iostream>
using namespace std;
int count = 0;
class Book{
public:
    Book(){
        count++;
        cout << "Total objects created count: " << count << endl;
    }
    ~Book(){
        count--;
        cout << "Total objects destroyed count: " << count << endl;
    }
};
int main(){
    Book b1, b2, b3;
    {
        Book b4;
       
    }
    return 0;
}
}/*
Output:
Total objects created count: 1
Total objects created count: 2
Total objects created count: 3
Total objects created count: 4
Total objects destroyed count: 3
Total objects destroyed count: 2
Total objects destroyed count: 1
Total objects destroyed count: 0
*/ 
