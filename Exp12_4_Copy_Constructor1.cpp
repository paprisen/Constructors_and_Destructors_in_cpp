// Papri Sen
// 24070123070
// A3
#include<iostream>
using namespace std;

class Num{
    public:

    int num1, num2;

    Num(int a, int b){
        num1=a;
        num2=b;
    }

    Num(const Num &n){
        num1=n.num1;
        num2=n.num2;
        cout<<"Copy constructor is called!"<<endl;
    }

    void display(){
        cout<<"Num-1: "<<num1<<endl<<"Num-2: "<<num2<<endl;
    }
};

int main(){

    Num n1(45,21);
    n1.display();
    cout<<endl;

    Num n2=n1;
    n2.display();

    return 0;
}
/*
Output:
Num-1: 45
Num-2: 21

Copy constructor is called!
Num-1: 45
Num-2: 21
*/
