
#include <iostream>
using namespace std;
class A{
    private:
    int a;
    int b;
    public:
     void setdata(int x,int u){
         a=x;
         b=u;
     }
     friend void add(A& t);
    
};
void add(A& t ){
    cout<<t.a+t.b;
}
int main() {
    A o1;
    o1.setdata(10,10);
    add(o1);

    return 0;
}