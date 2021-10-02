#include<iostream>
using namespace std;
class Emphoyee
{
private:
    string name;
    int salary;
public:
    Emphoyee(string name,int salary)
    {
        this->name=name;
        this->salary=salary;
    }
    string getName()
    {
        return name;
    }
    int getSalary()
    {
        return salary;
    }
    void setNane(string name)
    {
        this->name = name;
    }
    void setSalary()
    {
        this->salary= salary;
    }
    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Salary: "<< getSalary() << endl;
    }
};
class Manager:public Emphoyee{
private:
    int bonus;
public:
    Manager(string name,int salary,int bonus) : Emphoyee(name,salary)
    {
        this->bonus=bonus;
    }
    int getBonus()
    {
        return bonus;
    }
    void setBonus(int bonus)
    {
        this->bonus=bonus;
    }
    void display()
    {
        Emphoyee::display();
        cout << "Bunos: " << getBonus() << endl;
        cout << "Salary sum: " << getSalary() + getBonus() <<endl;
        
    }
};
int main()
{
    Manager s("Tinh",1600,500);
    s.display();
    return 0;
}
