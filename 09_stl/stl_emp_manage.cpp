#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEMployee(const Employee& emp){
    cout << "ID: " << emp.id << "Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}

int main(){

    vector<Employee> employees = {
        {101, "hitesh", 100000},
        {101, "saksham", 30000},
        {101, "shubham", 50000},
        {101, "anirudh", 60000},
        {101, "aryan", 70000},
    };

    

    return 0;
}
