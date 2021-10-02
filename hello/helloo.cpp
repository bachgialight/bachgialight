#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    int dob;
public:
    Person(string name,int dob){
        this->name=name;
        this->dob=dob;
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name=name;
    }
    int getDob()
    {
        return dob;
    }
    void setDob(int dob)
    {
        this->dob=dob;
    }
};

class NguoiIU:public Person{
private:
    string tinh_cach;
    int vong_1;
    int vong_2;
    int vong_3;
public:
    NguoiIU(string name,int dob,string tinh_cach,int vong_1,int vong_2,int vong_3):Person(name,dob){
        this->tinh_cach=tinh_cach;
        this->vong_1=vong_1;
        this->vong_2=vong_2;
        this->vong_3=vong_3;
    }
    void setTinh_cach(string tinh_cach)
    {
        this->tinh_cach=tinh_cach;
    }
    void setVong_1(int vong_1){
        this->vong_1=vong_1;
    }
    void setVong_2(int vong_2){
        this->vong_2=vong_2;
    }
    void setVong_3(int vong_3)
    {
        this->vong_3=vong_3;
    }
    string getTinh_cach()
    {
        return tinh_cach;
    }
    int getVong_1()
    {
        return vong_1;
    }
    int getVong_2()
    {
        return vong_2;
    }
    int getVong_3()
    {
        return vong_3;
    }
    void display()
    {
        cout << "Name girlFriend: " << getName() << endl;
        cout << "Date of birth: " << getDob() << endl;
        cout << "Tinh cach cua Nguoi iu: " << getTinh_cach() << endl;
        cout << "Vong 1: " << getVong_1() << endl;
        cout << "Vong 2: " << getVong_2() << endl;
        cout << "Vong 3: " <<  getVong_3() << endl;
    }
};
int main()
{
    NguoiIU s("Bao",2003,"Dang yeu",90,60,90);
    s.display();
    return 0;
}