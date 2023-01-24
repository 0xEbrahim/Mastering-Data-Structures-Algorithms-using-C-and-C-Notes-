#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Rectangle{
private:
    int length,width;
public:
    Rectangle(int length,int width){
        this->length = length;
        this->width = width;
    }
    int getLength(){
        return length;
    }
    int getWidth(){
        return width;
    }
    int area(){
        return this->length*this->width;
    }
    int perimeter(){
        return 2*(this->width+this->length);
    }
};
int main()
{
Rectangle r(10,20);
int a = r.area();
int p = r.perimeter();

cout<<"Area is : "<<a<<", and perimeter is : "<<p;
}
