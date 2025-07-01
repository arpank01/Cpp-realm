#include <iostream>
using namespace std;

class coord{
    public:
    int x;
    int y;
    coord(){
        
    }
     coord(int a , int b){
        this->x=a;
        this->y=b;
    }
    coord operator+(coord m){
        coord s;
        s.x=this->x+m.x;
        s.y=this->y+m.y;
        return s;
    }
//we overload the () operator to make us be able to create function objects ie objects that can also behave like functions 
    int operator()(){
        return this->x+this->y;
    }
   
};
//overloading the << operator 
ostream& operator<<(ostream&os , coord & p){
    os<<"x value : "<<p.x<<endl<<"y value : "<< p.y<<endl;
    return os;
}
int main() {
    coord a(3,4);
    coord b(5,6);
    coord f=a+b;
    cout<<f();
  //notice how f() is called as an function that gives the values of f.x+f.y  of the object f
  //ie its an classic example of operator overlaoding 
    cout<<f;
//we will get an custom output now that we have overloaded the << operator to be compatible with objects of class coord
    

    return 0;
}
