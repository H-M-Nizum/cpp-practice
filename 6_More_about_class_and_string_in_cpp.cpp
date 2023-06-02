#include<bits/stdc++.h>
using namespace std;
// #### creat a function inside a class####
class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        // this keyword means pointer of a object.
        // if use same name in constructor and class property than we use this keyword. 
        Person(string name,int age,int m1,int m2)
        {
            this->name=name;
            this->age=age;
            marks1=m1;
            marks2=m2;
        }
        void hello()
        {
            cout<<name<< " " <<age<<endl;
        }
        int total_marks()
        {
            return marks1+marks2;
        }
};

// #### Reverse word printing using stringstream####
void print(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
    
//##### string constructor###
    string s="hello world";
    // 1
    string s1("hello world");
    // 2
    string s2("hello world",7);
    // 3
    string a="hello world";
    string s3(a,4);
    // 4
    string s4(26,'A');
    cout<<s4<<endl;

// ##### sort string using sort function####
    sort(s.begin(),s.end());
    cout<<s<<endl;


//#### range based for loop in string####
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    // Same process for array.
    for(char c:s)
    {
        cout<<c<<endl;
    }


// #### Reverse word printing using stringstream####
    string stri;
    getline(cin,stri);
    stringstream ss(stri);
    print(ss);


// #### creat a function inside a class####
    Person bakib("Rakib Ahsan",24,95,85);
    cout<<bakib.name<<endl;



// ###### copy dynamic object in c++ ####
    Person* rakib=new Person("Rakib Ahsan",24,95,85);
    Person* sakib=new Person("Sakib Ahamed",24,95,85);

    // rakib=sakib;
    // rakib->name=sakib->name;
    // rakib->age=sakib->age;
    *rakib=*sakib;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;

    return 0;
}