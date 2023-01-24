#include<bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>
class  Arithametic{
private:
    T a,b;
public:
    Arithametic(T a,T b);
        T add();
        T sub();

};
template<class T>
Arithametic<T>::Arithametic(T a, T b) {
    this->a=a;
    this->b=b;
}
template<class T>
T Arithametic<T>::add(){
    T c = a+b;
    return c;
}
template<class T>
T Arithametic<T>::sub() {
    T c = a-b;
    return c;
}

int main()
{
 Arithametic<int> ar(15,10);
 cout<<"int : "<<ar.add()<<", int sub: "<<ar.sub()<<endl;
 Arithametic<float> arF(15.2,12.4);
 cout<<"Float : "<<arF.add()<<", Float sub: "<<arF.sub()<<endl;

}
