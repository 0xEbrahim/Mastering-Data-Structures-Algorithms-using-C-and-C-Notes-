#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Rectangle{
private:
    int length,width;
public:
    Rectangle(){length=width=1;};
    Rectangle(int length,int width);
    int getLength();
    int getWidth();
    int area();
    int perimeter();
};

int Rectangle::area() {
    return length*width;
}
int Rectangle::perimeter() {
    return 2*(length+width);
}
int Rectangle::getLength() {
    return length;
}
int Rectangle::getWidth() {
    return width;
}
Rectangle::Rectangle(int length, int width) {
    this->length=length;
    this->width = width;
}
int main()
{
Rectangle r(10,20);
int a = r.area();
int p = r.perimeter();

cout<<"Area is : "<<a<<", and perimeter is : "<<p;
}
