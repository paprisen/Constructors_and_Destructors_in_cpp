// Papri Sen
// 24070123070
// A3
#include<iostream>
using namespace std;

class Book{
    string name;
    string author;
    float price;

    public:
    Book(string b, string a, float p){
        name=b;
        author=a;
        price=p;
    }

    Book(const Book &b){
        name=b.name;
        author=b.author;
        price=b.price;
        cout<<"Copy constructor is called!"<<endl;
    }

    void display(){
        cout<<"Book Name: "<<name<<endl<<"Book Author: "<<author<<endl<<"Price: "<<price<<endl;
    }
};

    int main(){

        string bname, bauthor;
        float bprice;

        cout<<"Enter Book Name: ";
        cin>>bname;

        cout<<"Enter Book Author: ";
        cin>>bauthor;

        cout<<"Enter Book Price: ";
        cin>>bprice;

        Book b1(bname, bauthor, bprice);

        b1.display();
        cout<<endl;

        Book b2=b1;
        b2.display();

        return 0;
    }

/*
Output:
Enter Book Name: DCLD
Enter Book Author: Stephen
Enter Book Price: 700
Book Name: DCLD
Book Author: Stephen
Price: 700

Copy constructor is called!
Book Name: DCLD
Book Author: Stephen
Price: 700

*/
