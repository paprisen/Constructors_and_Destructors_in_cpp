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

    void display(){
        cout<<"Sum: "<<num1+num2<<endl;
        cout<<"Difference: "<<num1-num2<<endl;
        cout<<"Multiplication: "<<num1*num2<<endl;
    }
};

int main(){

    Num n1(45,21);
    n1.display();

    return 0;
}
/*
Output:
Sum: 66
Difference: 24
Multiplication: 945
*/
