#include <iostream>
using namespace std;

class Employee {
protected:
    int employee_id;
    string name;
    int age;
    float salary;

public:
    virtual void setData() = 0;        
    virtual void display() const = 0;   
    virtual ~Employee() {}
};


class FullTimeEmployee : public Employee {
    float bonus;

public:
    void setData() override {
        cout << "Enter Full-Time Employee ID: ";
        cin >> employee_id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display() const override {
        cout << "[Full-Time] ID: " << employee_id << ", Name: " << name
             << ", Age: " << age << ", Salary: " << salary << ", Bonus: " << bonus << endl;
    }
};


class PartTimeEmployee : public Employee {
    int hours_worked;

public:
    void setData() override {
        cout << "Enter Part-Time Employee ID: ";
        cin >> employee_id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Hours Worked: ";
        cin >> hours_worked;
    }

    void display() const override {
        cout << "[Part-Time] ID: " << employee_id << ", Name: " << name
             << ", Age: " << age << ", Salary: " << salary << ", Hours Worked: " << hours_worked << endl;
    }
};

main() {
    const int MAX = 10;
    Employee* employees[MAX];
    int count = 0;
    int choice;

    do {
        cout << "\n--- Employee Management Menu ---\n";
        cout << "1. Add Full-Time Employee\n";
        cout << "2. Add Part-Time Employee\n";
        cout << "3. Display All Employees\n";
        cout << "4. Delete Last Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < MAX) {
                    employees[count] = new FullTimeEmployee();
                    employees[count]->setData();
                    count++;
                } else {
                    cout << "Employee list full.\n";
                }
                break;

            case 2:
                if (count < MAX) {
                    employees[count] = new PartTimeEmployee();
                    employees[count]->setData();
                    count++;
                } else {
                    cout << "Employee list full.\n";
                }
                break;

            case 3:
                if (count == 0) {
                    cout << "No employees to display.\n";
                } else {
                    for (int i = 0; i < count; i++) {
                        employees[i]->display();
                    }
                }
                break;

            case 4:
                if (count > 0) {
                    delete employees[--count];
                    cout << "Last employee deleted.\n";
                } else {
                    cout << "No employees to delete.\n";
                }
                break;

            case 5:
                for (int i = 0; i < count; i++) {
                    delete employees[i];
                }
                cout << "Exiting and cleaning up memory...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);

}

