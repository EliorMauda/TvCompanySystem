#ifndef EMPLOYEE
#define EMPLOYEE
#include "Person.h"
#include "contract.h"
#include "General.h"
#define EMPLOYEE_MIN_AGE 20


typedef struct
{
	Person person;
	Contract contract;
}Employee;

int initEmployee(Employee* pEmployee);
void printEmployee(const Employee* pEmployee);


#endif //
