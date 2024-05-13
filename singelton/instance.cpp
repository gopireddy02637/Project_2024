#include<iostream>
#include<string>

using namespace std;

class gopi{
    static gopi* new_job;
    int tried;
    string company;
    public:
    static gopi *jobneeded(){
        if(new_job==NULL){
            new_job=new gopi();
            return new_job;
        }
        else 
        return new_job;
    }
    void set(int x,string n){
        tried = x;
        company=n;
    }
    void print(){
        cout<<tried<<" times tried in this company  "<<company<<endl;
    }
};
gopi * gopi::new_job=NULL;
int main(){
    gopi *object=gopi::jobneeded();
    object->set(5,"google");
    object->print();

    return 0;
}