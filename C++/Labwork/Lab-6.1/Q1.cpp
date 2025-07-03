#include <iostream>
using namespace std;


class Admin {
private:
    string company_name;
    float total_annual_revenue;
    bool can_terminate;

protected:
    float manager_salary;
    float employee_salary;
    int total_staff;

public:
    Admin() {
        company_name = "TechCorp Pvt Ltd";
        manager_salary = 80000;
        employee_salary = 40000;
        total_staff = 120;
        total_annual_revenue = 12.5;
        can_terminate = true;
    }

    virtual void myAccess() {
        cout << "\n--- Admin Access ---\n";
        cout << "Company Name: " << company_name << endl;
        cout << "Total Annual Revenue: " << total_annual_revenue << " Cr" << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
    }
};


class Manager : public Admin {
public:
    void myAccess() override {
        cout << "\n--- Manager Access ---\n";
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        
    }
};

class Employee : public Manager {
public:
    void myAccess() override {
        cout << "\n--- Employee Access ---\n";
        cout << "Employee Salary: " << employee_salary << endl;
    
    }
};


main() {
    Admin admin;
    Manager mgr;
    Employee emp;

    admin.myAccess();
    mgr.myAccess();
    emp.myAccess();

}

