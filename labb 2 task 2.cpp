#include <iostream>

using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;
};

class FullTimeEmployee : public Employee {
private:
    double fixedSalary;
public:
    FullTimeEmployee(double salary) {
        fixedSalary = salary;
    }
    double calculateSalary() override {
        return fixedSalary;
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    PartTimeEmployee(double rate, int hours) {
        hourlyRate = rate;
        hoursWorked = hours;
    }
    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    FullTimeEmployee fullTime(50000);
    PartTimeEmployee partTime(20, 30);

    cout << "Full-Time Employee Salary: " << fullTime.calculateSalary() << endl;
    cout << "Part-Time Employee Salary: " << partTime.calculateSalary() << endl;

    return 0;
}