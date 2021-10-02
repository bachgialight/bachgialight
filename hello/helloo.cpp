#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string address;
public:
    Person(string name,int age,string address)
    {
        this->name=name;
        this->age=age;
        this->address=address;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getAddress()
    {
        return address;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Address: " << getAddress() << endl;
    }
};
class Teacher:public Person
{
private:
    int salary;
public:
    Teacher(string name,int age,string address,int salary):Person(name,age,address){
        this->salary=salary;
    }
    int getSalary()
    {
        return salary;
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    void display()
    {
        cout << "_____________Teacher_____________" <<endl;
        Person::display();
        cout << "Salary: " << getSalary() <<" VND mot dem"<< endl;
    }
};
class Student:public Person
{
private:
    int gpa;
public:
    Student(string name,int age,string address,int gpa):Person(name,age,address){
        this->gpa=gpa;
    }
    int getGpa()
    {
        return gpa;
    }
    void setGpa(int gpa)
    {
        this->gpa=gpa;
    }
    void display()
    {
        cout << "_____________Student_____________" <<endl;
        Person::display();
        cout << "GPA: " << getGpa() << endl;
    }
    
};
int main()  
{
    Teacher s("Thao",26,"Soc Trang",500);
    s.display();
    Student s1("Tinh",19,"Soc Trang",10);
    s1.display();
    return 0;
}

