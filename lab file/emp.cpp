#include<iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    public:
     void setData(void)
     {
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
     }
     void getData(void){
        cout<<"the id of the employe is"<<id<<"and this is employe number"<<count<<endl;
     }
};

int Employee::count;
int main(){
    Employee e1,e2,e3;
    e1.setData();
    e1.setData();
e2.getData();
e2.getData();
e3.getData();
e3.getData();
return 0;
}
