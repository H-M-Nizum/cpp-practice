// class and object for cpp.
#include<bits/stdc++.h>
using namespace std;
// simple class.
class Student1
{
    public:
        string nam;
        int rol;
        int cl;
        char sec;
};

// class with constructor
class Student2
{
    public:
        string name;
        int roll;
        int cls;
        char section;

        Student2(int r,char s,int c,string n)
        {
            roll=r;
            section=s;
            cls=c;
            name = n;
        }
};

// ####Return object from function.####
Student2 fun()
{
    char name[100]="Rahim Ullah";
    Student2 r(29,'C',7,name);
    return r;
}
int main()
{
    // ####create a object from Student1 class.#####
    Student1 rahim;
    rahim.rol=29;
    rahim.cl=9;
    rahim.sec='A';
    rahim.nam ="Rahim Uddin";

    Student1 karim;
    karim.rol=55;
    karim.cl=9;
    karim.sec='C';
    karim.nam="Karim Cholimulla";
    cout<<rahim.rol;


    // ####create a object from Student2 class using constructor.####
    Student2 rahim1(29,'A',7,"Rahim Ullah");
    Student2 karim1(55,'D',7,"Karim Cholimullah");

    cout<<karim1.roll<<endl;
    cout<<rahim1.roll<<endl;


    // #####Dynamic object from student2 class#####
    char name[100]="Rahim Ullah";
    // Student rahim(5,'A',11,name);
    Student2* rahim2 = new Student2(5,'A',11,name);
    (*rahim2).roll=55;

    // int * a = new int;
    // *a=10;
    // cout<<*a<<endl;

    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim).section<<endl;
    // cout<<(*rahim).cls<<endl;

    // shortcut upay
    // arrow sign
    // (*rahim). = rahim->

    cout<<rahim2->name<<endl;
    cout<<rahim2->roll<<endl;
    cout<<rahim2->section<<endl;
    cout<<rahim2->cls<<endl;

    // delete an object 
    delete rahim2;

    cout<<rahim2->name<<endl;
    cout<<rahim2->roll<<endl;
    cout<<rahim2->section<<endl;
    cout<<rahim2->cls<<endl;


    //#####return object from function.####
     Student2 Fahim=fun();

    cout<<Fahim.name<<endl;
    cout<<Fahim.roll<<endl;
    cout<<Fahim.section<<endl;
    cout<<Fahim.cls<<endl;
    return 0;
}