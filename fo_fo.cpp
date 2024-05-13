// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class stud{
    public:
    int set(int x){
        cout<<x<<endl;
    }
    int set(int x,int y){
        cout<<x<<endl<<y<<endl;
    }
    void fav(){
        cout<<"funtion overriding"<<endl;
    }
};
class boy: public stud{
    public:
    void fav(){
        cout<<"funtion overing";
    }
};
int main() {
    // Write C++ code here
    cout << "Hello world!";
    stud s;
    s.set(10);
    s.set(20,30);
    //s.fav();
    boy b;
    b.fav();
    return 0;
}
