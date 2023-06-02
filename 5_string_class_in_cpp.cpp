//##### A string is a dynamic array in c++###
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="Hello";
    string s2="hello";
    // chack two string same or not.
    if(s1 == s2) cout<<"Same"<<endl;
    else cout<<"Not Same"<<endl;
    // string input withspace.
    int x;
    cin>>x;
    // cin.ignore();
    getchar();
    string e;
    // cin>>s;
    // cin.getline(s,100); char s[100];
    getline(cin,e);
    cout<<x<<endl;
    cout<<e<<endl;

    //#### string capacity function in c++####
    // s.size() -> returns the size of the string.
    cout<<"s.size() -> returns the size of the string : "<<s1.size()<<endl;
    // s.max_size() -> returns the maximum size that string can hold.
    cout<<"max_size : "<<s1.max_size()<<endl;
    // s.capacity() -> returns current available capacity of the string.
    cout<<"capacity : "<<s1.capacity()<<endl;
    // s.clear() -> clear the string.
    s1.clear();
    // s.empty() -> return true/false if the string is empty.
    if(s1.empty()) cout<<"This string is empty"<<endl;
    // s.resize() -> change the size of the string.
    string s;
    cin>>s;
    // s.resize(5);
    // s.resize(20,'X');
    // cout<<s.size()<<endl;
    // cout<<s<<endl;
    s.resize(5);
    cout<<s<<endl;
    s.resize(11,'X');
    cout<<s<<endl;
    

    // ###### string element access in c++#####;
    // Element access
    //     S[i] -> access the ith index of the string.
    //     s.at(i) -> access the ith index of the string.
    //     s.back() -> access the last element of the string.
    //     s.front() -> access the first element of the string.
    string s3;
    cin>>s3;
    cout<<s3[0]<<endl;
    cout<<s3.at(0)<<endl;
    cout<<s3[s3.size()-1]<<endl;
    cout<<s3.back()<<endl;
    cout<<s3.front()<<endl;

    // #####string Modifiers in c++####;
    // Modifiers
    //     s+= -> append another string.
    //     s.append() -> append another string.
    //     s.push_back() -> add character to the last of the string.
    //     s.pop_back() -> remove the last character of the string.
    //     s= -> assign string.
    //     s.assign() -> assign string.
    //     s.erase() -> erase characters from the string.
    //     s.replace() -> replace a portion of the string.
    //     s.insert() -> insert a portion to a specific position.


    string a = "Hello";
    string b = "A";
    a+=b;
    a.append(b);
    cout<<a<<endl;
    cout<<b<<endl;
    // a="HelloA"; -> works
    // a=a+"A"; -> works
    // a[5]='A'; -> didn't work
    // a.push_back('A'); // works
    // a.pop_back();
    // a.pop_back();
    // cout<<a<<endl;

    // a="Gelo";
    // a.assign("Gelo");
    // cout<<a<<endl;


    string a1="HelloWorld";
    // a1.erase(4,3);
    a1.replace(5,0,"so");
    // a1.insert(5,"Rahat");
    cout<<a1<<endl;


    //###### string iterators in c++####
    // Iterators
    //     s.begin() -> pointer to the first element.
    //     s.end() -> pointer to the next element after the last element of the string.

    string s5;
    cin>>s5;
    for(int i=0;i<s5.size();i++)
    {
        cout<<s5[i]<<endl;
    }
    cout<<*s5.begin()<<endl;
    cout<<*(s5.end()-1)<<endl;
    for(auto it=s5.begin();it<s5.end();it++)
    {
        cout<<*it<<endl;
    }


    // #### stringstream in c++..this function separate word by word depend on space.####
    string st;
    getline(cin,st);
    stringstream ss;
    ss<<st;
    string word;
    int cnt=0;
    while(ss >> word)
    {
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}