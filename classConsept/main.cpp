//
//  main.cpp
//  classConsept
//
//  Created by Kaan Şengün on 13.11.2023.
//

#include <iostream>
#include "studentClass.h"
using namespace std;

int main(int argc, const char * argv[]) {
    //Sınıf tanımında hafızadan yer ayrılmaz ama nesne üretildiğinde yer kaplar(Kapladığı alan da nesnenin verileri kadar)
    Student student1("Ogun","Birinci");
    Student student2("Duygu","Keydal","4157");
    Student student3(student1);
    student3.displayInformation();
    
    Student studentArray[5];
    
    /*student1.setName("Ogun");
    student1.setSurname("Birinci");
    student1.setID("3000");
    */
    string name=student1.getName();
    string surname=student1.getSurname();
    string ID=student1.getID();
    
    cout<<name<<endl;
    cout<<surname<<endl;
    cout<<ID<<endl;
    
    student2.displayInformation();
    
    if(true){
        Student student5;
    }//Local bir nesne oluşturduk
    cout<<"student5"<<endl;
    return 0;
}
