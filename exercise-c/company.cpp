/*
* File Name: company.cpp
* Assignment: Lab 1 Exercise C
* Lab section: B01
* Completed by: Abhilash Paul
* Submission Date: Sept 17, 2024
*/

#include <string>
#include <vector>

using namespace std;

// Address class to handle addreses better
class Address {
private:
    string street;
    string city;
    string state;
    string postalCode;
    string country;
};

// Date class to handle dates better
class Date {
private:
    int year;
    int month;
    int day;
};

// Base class for personal information
class Person {
protected:
    string name;
    Address address;
};

// Employee class inheriting from Person
class Employee : public Person {
private:
    Date dateOfBirth;
    string state;
};

// Customer class inheriting from Person
class Customer : public Person {
private:
    string phone;
};

// Company class
class Company {
private:
    string companyName;
    Address companyAddress;
    vector<Employee> employees;
    Date dateEstablished;
    vector<Customer> customers;
};
