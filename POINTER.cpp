#include<iostream>
using namespace std;
int main()
{

    int x=10;
    float y=20;
    cout<<x<<endl;
    int *ptr=&x;
    cout<<ptr<<endl;
    cout<<y<<endl;
    float *ptrf=&y;
    cout<<ptrf;
    return 0;
}
