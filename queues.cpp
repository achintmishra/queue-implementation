#include <iostream>
#include <queue>
using namespace std;

class employees{
    public:
    string name;
    int employee_id;
    char status;
};
int main()
{
  queue <employees> sjt;
  queue <employees> tt;
  int n;
  cout<<"Enter the number of employees"<<endl;
  cin>>n;
  employees details[n];
  for(int i=0;i<n;i++){
      cout<<"Enter name"<<i+1<<endl;
      cin>>details[i].name;
      cout<<"Enter employee_id"<<endl;
      cin>>details[i].employee_id;
      cout<<"Enter status Y/N"<<endl;
      cin>>details[i].status;
      if(details[i].status=='Y'){
          tt.push(details[i]);
        }else{
        sjt.push(details[i]);
        }
    }
    cout<<endl<<endl;
    cout<<"Main List : "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Name : "<<details[i].name<<endl;
        cout<<"Employee id : "<<details[i].employee_id<<endl;
        cout<<"Status :"<<details[i].status<<endl;
            }
            cout<<endl<<endl;
    cout<<"Employees who receive first dose : "<<endl;
    while(!sjt.empty()){
        employees s=sjt.front();
        cout<<"Name : "<<s.name<<endl;
        cout<<"Employee id : "<<s.employee_id<<endl;
        sjt.pop();
    }
    cout<<endl<<endl;
     cout<<"Employees who receive second dose : "<<endl;
    while(!tt.empty()){
        employees s=tt.front();
        cout<<"Name : "<<s.name<<endl;
        cout<<"Employee id : "<<s.employee_id<<endl;
        tt.pop();
    }
    return 0;
}