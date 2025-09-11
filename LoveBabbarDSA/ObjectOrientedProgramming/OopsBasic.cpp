#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    //properties
    string name;
    string dept;
    string subject;
    

    //methods
    void changeDept(string newDept){
        dept=newDept;
    }

    //setter
    void setSalary(double s){
        salary=s;
    }

    //getter
    int getSalary(){
        return salary;
    }

};


int main(){

    //creation of object
    Teacher t1;
    t1.name = "Shraddha";
    t1.subject="C++";
    t1.dept="CS";
    t1.setSalary(25000);

    cout<<t1.name<<endl; 
    cout<<t1.getSalary();
    
}