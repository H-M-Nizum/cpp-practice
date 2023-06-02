// Basically there are two type in a memory allocation.
// 1. Stack memory allocation. -->> compile time
// 2. Dynamic / Heap memoroy allocation. -->> Run time.

#include<bits/stdc++.h>
using namespace std;

// Return dynamic array from function.
int* fun()
{
    int *l=new int[5];
    // int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>l[i];
    }
    return l;
}
int main(){
    // Return from fun() function.
    int *l=fun();
    for(int i=0;i<5;i++)
    {
        cout<<l[i]<<" ";
    }
    cout<<endl;

    // Dynamic variable/ data.
    int * n=new int; // syntax
    *n=10;
    cout<<*n<<endl;

    float * f=new float;
    *f=2.56;
    cout<<*f<<endl;
    delete f;// delete 

    // Dynamic array.
    int * a=new int[5]; // int a[5]
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    // increase dynamic array.
    int *b=new int[7];
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    b[5]=60;
    b[6]=70;
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // delete a array
    delete[] a;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}