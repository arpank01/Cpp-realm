#include <iostream>
using namespace std;


class coordinate{
    public:
    int x,y,z;
    coordinate(){

    }
    coordinate(int a, int b, int c){
        this->x=a;
        this->y=b;
        this->z=c;
    }
    //overloading the + operator for this custom coordinate class
    coordinate operator+(const coordinate&coordinate2){
        coordinate result;
        result.x=x+coordinate2.x;
        result.y=y+coordinate2.y;
        result.z=z+coordinate2.z;
        return result;
    }
    void display(){
        cout<<"("<<x<<","<<y<<","<<z<<")";
    }
    
};
int main(){
  coordinate p1(5,6,7);
  coordinate p2(3,4,5);
  coordinate p3 =p1+p2;
  p3.display();
return 0;


}
