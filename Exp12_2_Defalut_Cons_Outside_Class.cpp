// Papri Sen
// 24070123070
// A3
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Marks{
    public:

    int SS;
    int EDC;
    int DCLD;
    int NT;
    int MTT;

    Marks();
    void display();
};

Marks::Marks(){
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

void Marks::display(){
    cout<<endl<<"SS: "<<SS<<"\n"<<"EDC: "<<EDC<<"\n"<<"DCLD: "<<DCLD<<"\n"<<"NT: "<<NT<<"\n"<<"MTT: "<<MTT;
}

int main(){

    Marks m;
    m.display();

    return 0;
}
/*
Output:
Enter SS marks:78
Enter EDC marks:74
Enter DCLD marks:83
Enter NT marks:92
Enter MTT marks:89

SS: 78
EDC: 74
DCLD: 83
NT: 92
MTT: 89
*/
