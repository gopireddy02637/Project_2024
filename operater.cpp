// #include <iostream>    
// using namespace std;    
// class Test    
// {    
//    private:    
//       int num;    
//    public:    
//        Test(): num(8){}    
//        void operator ++()         {     
//           num = num+1;     
//        }    
//        void Print() {     
//            cout<<"The Count is: "<<num;     
//        }    
// };    
// int main()    
// {    
//     Test tt;    
//     ++tt;  // calling of a function "void operator ++()"    
//     tt.Print();    
//     return 0;    
// }    

#include<iostream>
using namespace std;

class a{
    int x,y;
    public:
    void get(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<x<<endl<<y<<endl;
    }
    a operator+(a &c){
        a temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
};
int main(){
    a obj1;
    a obj2;
    obj1.get(10,20);
    obj2.get(20,10);
    a obj;
    obj=obj1+obj2;
    obj.display();
    return 0 ;
}