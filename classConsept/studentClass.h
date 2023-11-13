//
//  studentClass.h
//  classConsept
//
//  Created by Kaan Şengün on 13.11.2023.
//

#include <iostream>
using namespace std;
/**
 ERİŞİM BELİRLEYİCİLERİ
 
 private---->Sadece sınıfın içerisinden erişilebilir.(Default olarak private kullanılır)
 protected-->Sadece class içerisinde ve miras alan classlarda erişilebilir main fonksiyonundan erişilemez.
 public----->Her yerden erişilebilir.
 
 */

class Student{
    string studentName,studentSurname,studentID;//üye değişkenler(member variable)
public:
    Student(){
        cout<<"Default constructor worked."<<endl;
        studentName="None";
        studentSurname="None";
        studentID="None";
    }
    Student(string name,string surname){
        cout<<"2 parameter constructor worked."<<endl;
        studentName=name;
        studentSurname=surname;
        studentID="None";
    }
    Student(string name,string surname,string ID){
        cout<<"3 parameter constructor worked."<<endl;
        studentName=name;
        studentSurname=surname;
        studentID=ID;
    }
    ~Student();//Parametre almaz
    Student(const Student &oth);
    void displayInformation();//üye fonksiyonlar(member function)
    void setName(string name){
        studentName=name;
    };
    void setSurname(string surname){
        studentSurname=surname;
    };
    void setID(string ID){
        studentID=ID;
    };
    string getName(){
        return studentName;
    };
    string getSurname(){
        return studentSurname;
    };
    string getID(){
        return studentID;
    };
    
};
void Student::displayInformation(){
    cout<<"Name:"<<studentName<<" "<<studentSurname<<endl;
    cout<<"ID:"<<studentID<<endl;
}
Student::~Student(){
    cout<<"Destructor worked."<<endl;
}
Student::Student(const Student &oth){
    cout<<"Copy constructor worked."<<endl;
    studentName=oth.studentName;
    studentSurname=oth.studentSurname;
    studentID=oth.studentID;
}
