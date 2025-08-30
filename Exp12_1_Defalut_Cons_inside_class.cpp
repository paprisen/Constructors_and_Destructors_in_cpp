// Papri Sen
// 24070123070
// A3
#include<iostream>
using namespace std;

class Marks{
    public:

    int SS;
    int EDC;
    int DCLD;
    int NT;
    int MTT;

    Marks(){
        cout<<"Enter SS marks:";
        cin>>SS;

        cout<<"Enter EDC marks:";
        cin>>EDC;

        cout<<"Enter DCLD marks:";
        cin>>DCLD;

        cout<<"Enter NT marks:";
        cin>>NT;

        cout<<"Enter MTT marks:";
        cin>>MTT;
    }
};

int main(){

    Marks m1;

    return 0;
}
/*
Output:
Enter SS marks:76
Enter EDC marks:83
Enter DCLD marks:86
Enter NT marks:79
Enter MTT marks:80
*/
