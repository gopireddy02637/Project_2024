#include<iostream>
#include<tuple>
#include<string>


using namespace std;

/* 
 
return multiple values from funtion
*/

int main(){
    tuple<int,string,float> t (1,"gopi",2.0);
    cout<<get<0>(t);
    cout<<get<1>(t);
}


