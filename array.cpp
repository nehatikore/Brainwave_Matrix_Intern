#include<iostream>
using namespace std;
int main(){
int marks[5]={23,78,65,44,98};
cout<<"hey"<<endl;
cout<<sizeof(marks)<<endl;
cout<<sizeof(marks)/sizeof(marks[0]);
for(int i=0;i<sizeof(marks)/sizeof(marks[0]);i++){
    cout<<i<<endl;
}
return 0;

}
