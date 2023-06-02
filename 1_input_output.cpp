// Hedder file for print function -->> #include<iostream>
// cout and cin do works in this function but its have std.
// #include<iostream>
// int main(){
//     std::cout<<"hello";
// }


// when we write using namespace std, then don't need to write std befor cout.
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello";
// }


// For floating point output we use #include<iomanip>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a = 2.34566;
    cout<<fixed<<setprecision(2)<<a;
}  


// take input
// int a, b;
// cin>>a>>b;
// without space string input output
// char s[100];
// cin>>s;
// cout<<s;

// with space string input output
// cin.getline(s, 100);
// cout<<s;