#include<iostream>
using namespace std;
int main()
{
    const int strSize=20;
    char* name1=new char[strSize];
    char* name2=new char[strSize];
    cin.get(name1,strSize);
    cin.get(name2,strSize);
    cout<<name1<<" "<<name2<<endl;
    return 0;

}