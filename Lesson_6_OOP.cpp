//
// Created by Dmitry Morozov on 30/4/22.
//
#include <iostream>


class A {
public :
    A () {
        std::cout << "A class Default constructor running" << std::endl;
    }

    A (std::string msg) {
        this->msg = msg;
        std::cout << "A class constructor with parameter running" << std::endl;
    }

    void PrintMsg () {
        std::cout << msg << std::endl;
    }

private:
    std::string msg;
};

class B : public A {
public:
    B () {
        std::cout << "B class Default constructor running" << std::endl;
    }
};

class C : public B {
public:
    C () {
        std::cout << "C class Default constructor running" << std::endl;
    }
};

class Human {
public:
    Human () {
        std::cout << "Human class Default constructor running" << std::endl;
    }

    Human (std::string name) {
        this->name = name;
        std::cout << "Human class constructor with parameter running" << std::endl;
    }

    std::string GetName () {
        return name;
    }

private :
    std::string name;
};

class Personality : public Human {
public:
    Personality () {
        std::cout << "Personality class Default constructor running" << std::endl;
        sitizenship = "Unknown";
    }

    Personality (std::string name, std::string sitizenship) : Human (name) {
        this->sitizenship = sitizenship;
        std::cout << "Personality class constructor with parameter running" << std::endl;
    }

    std::string GetSitizenship () {
        return sitizenship;
    }

private:
    std::string sitizenship;
};

class Russian : public Personality {
public:
    Russian ()  {
        std::cout << "Russian class Default constructor running" << std::endl;
    }

    Russian (std::string name) : Personality (name, "Russian") {
        std::cout << "Russian class constructor with parameter running" << std::endl;
    }


    void PrintInfo () {
        std::cout << GetName() <<" " << GetSitizenship() << std::endl;
    }

};


int main () {
//    A value;
//    value.PrintMsg ();
//
//    A value2 ("Hello World");
//    value2.PrintMsg ();
//    B b_value;
//    C c_value;

Russian boy1 ("Vasya");
boy1.PrintInfo ();

}