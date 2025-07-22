#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee 
{
protected:
    int empID;
    string name, department, joiningDate;

public:
    Employee(int id, string nm, string dept, string jDate)//constructor called
        //: empID(id), name(nm), department(dept), joiningDate(jDate) 
		{
			empID=id;
			name=nm;
			department=dept;
			joiningDate=jDate;
		}

    virtual void display() 
	{
        cout << "ID: " << empID << ", Name: " << name
             << ", Dept: " << department << ", Joined: " << joiningDate << endl;
    }

    virtual float calculateSalary() = 0; // Pure virtual function
};

// FullTime Employee
class FullTime : public Employee {
protected:
    float basicSalary, allowance, bonus, deduction;

public:
    FullTime(int id, string nm, string dept, string jDate,
             float basic, float allow, float bon, float ded)
        : Employee(id, nm, dept, jDate),
          basicSalary(basic), allowance(allow), bonus(bon), deduction(ded) {}

    float calculateSalary() override {
        return (basicSalary + allowance + bonus - deduction);
    }

    void display() override {
        Employee::display();
        cout << "FullTime Salary: " << calculateSalary() << endl;
    }
};

// Manager (inherits from FullTime)
class Manager : public FullTime {
private:
    float specialAllowance;

public:
    Manager(int id, string nm, string dept, string jDate,
            float basic, float allow, float bon, float ded, float spAll)
        : FullTime(id, nm, dept, jDate, basic, allow, bon, ded),
          specialAllowance(spAll) {}

    float calculateSalary() override {
        return (basicSalary + allowance + bonus + specialAllowance - deduction);
    }

    void display() override {
        Employee::display();
        cout << "Manager Salary: " << calculateSalary() << endl;
    }
};

// TeamLead (inherits from FullTime)
class TeamLead : public FullTime {
private:
    float projectAllowance;

public:
    TeamLead(int id, string nm, string dept, string jDate,
             float basic, float allow, float bon, float ded, float projAll)
        : FullTime(id, nm, dept, jDate, basic, allow, bon, ded),
          projectAllowance(projAll) {}

    float calculateSalary() override {
        return (basicSalary + allowance + bonus + projectAllowance - deduction);
    }

    void display() override {
        Employee::display();
        cout << "TeamLead Salary: " << calculateSalary() << endl;
    }
};

// PartTime Employee
class PartTime : public Employee {
private:
    float hoursWorked, ratePerHour;

public:
    PartTime(int id, string nm, string dept, string jDate,
             float hours, float rate)
        : Employee(id, nm, dept, jDate), hoursWorked(hours), ratePerHour(rate) {}

    float calculateSalary() override {
        return hoursWorked * ratePerHour;
    }

    void display() override {
        Employee::display();
        cout << "PartTime Salary: " << calculateSalary() << endl;
    }
};

// Intern
class Intern : public Employee {
private:
    float stipend;

public:
    Intern(int id, string nm, string dept, string jDate, float stip)
        : Employee(id, nm, dept, jDate), stipend(stip) {}

    float calculateSalary() override {
        return stipend;
    }

    void display() override {
        Employee::display();
        cout << "Intern Stipend: " << calculateSalary() << endl;
    }
};

// Contractor
class Contractor : public Employee {
private:
    float contractAmount, taxDeduction;

public:
    Contractor(int id, string nm, string dept, string jDate,
               float amount, float tax)
        : Employee(id, nm, dept, jDate), contractAmount(amount), taxDeduction(tax) {}

    float calculateSalary() override {
        return contractAmount - taxDeduction;
    }

    void display() override {
        Employee::display();
        cout << "Contractor Salary: " << calculateSalary() << endl;
    }
};

// Main Function
int main() {
    Employee* staff[5];

    staff[0] = new FullTime(101, "Alice", "HR", "2022-01-10", 30000, 5000, 3000, 2000);
    staff[1] = new Manager(102, "Bob", "IT", "2021-03-15", 50000, 8000, 6000, 3000, 10000);
    staff[2] = new TeamLead(103, "Charlie", "Dev", "2020-06-20", 40000, 6000, 4000, 2500, 7000);
    staff[3] = new PartTime(104, "David", "Support", "2023-02-05", 120, 150);
    staff[4] = new Intern(105, "Eva", "R&D", "2023-08-01", 8000);

    for (int i = 0; i < 5; i++) {
        staff[i]->display();
        cout << "---------------------" << endl;
    }

    // Free memory
    for (int i = 0; i < 5; i++) {
        delete staff[i];
    }

    return 0;
}

