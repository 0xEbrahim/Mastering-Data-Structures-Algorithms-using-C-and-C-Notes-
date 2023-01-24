#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct Rectangle{
private:
    int length,width;
public:
    int getLength(){
        return length;
    }
    int setLength(int a){
        this->length = a;
    }
    int setWidth(int a){
        this->width = a;
    }
    int getWidth(){
        return width;
    };
};
int intialize(Rectangle *r,int a,int b){
    r->setLength(a);
    r->setWidth(b);
}
int area(Rectangle r){
    return r.getWidth()*r.getLength();
}
int perimeter(Rectangle r){
    return 2*(r.getLength()+r.getWidth());
}
int main()
{
Rectangle r;
    intialize(&r,10,20);
int a = area(r);
int p = perimeter(r);
cout<<"Area is : "<<a<<", and perimeter is : "<<p;
}
