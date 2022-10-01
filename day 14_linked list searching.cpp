#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Employee
{
    string emp_name;
    int salary;
    int emp_id;
    struct Employee *next;
};

struct Employee *Cloudo_Tech = NULL;

void add_employee()
{
    struct Employee *emp = new Employee;
    cin>>emp->emp_name >> emp->emp_id >> emp->salary;
    emp->next = NULL;
  
    if(Cloudo_Tech == NULL){
        Cloudo_Tech = emp;
    }
    else {
        struct Employee *ptr = Cloudo_Tech;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = emp;
    }
    
}

void search_employee(int ep_id)
{
    struct Employee *ptr =  Cloudo_Tech;
    
    while(ptr!=NULL){
        if(ptr->emp_id == ep_id){
            break;
        }
        ptr = ptr->next;
    }
    if(ptr==NULL){
        cout << "Employee does not exist";
    }
    else{
        cout << ptr->emp_name << " " << ptr->salary;
    }
}

int main() {
    
    int n;
    cin>>n;   
  
    for(int i=0; i<n; i++){
      add_employee();
    } 
    
    int idd;
    cin >> idd;
    search_employee(idd);
    return 0;
}