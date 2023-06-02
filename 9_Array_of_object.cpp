//#### Array of object###
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};

// #### sort function ###
bool cmp(Student a,Student b)
{
    if(a.marks > b.marks) return true;
    else return false;
}


int main()
{
// ### create a array of object###
    Student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

// ### get max object depend on marks###
    Student mx;
    mx.marks=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(a[i].marks>mx.marks)
        {
            mx=a[i];
        }
    }
    cout<<"max object : "<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;


// ### get min object depend on marks###
    Student mn;
    mn.marks=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(a[i].marks<mn.marks)
        {
            mn=a[i];
        }
    }
    cout<<"min object : "<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;


// ### sort array of objects using selection sort ###
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(a[i].roll > a[j].roll)
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<"using selection sort : "<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }


// #### sort array using sort function###
    sort(a,a+3,cmp);
    for(int i=0;i<3;i++)
    {
        cout<<"using sort function decending : "<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}

//###########
//counting sort.
//###############

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; 
//     cin>>n;
//     int frq[26]={0};
//     for(int i=0;i<n;i++)
//     {
//         char a;
//         cin>>a;
//         frq[a-'a']++;
//     }
//     for(char i='a';i<='z';i++)
//     {
//         if(frq[i-'a'] > 0)
//         {
//             for(int j=0;j<frq[i-'a'];j++)
//             {
//                 cout<<i;
//             }
//         }
//     }
//     return 0;
// }