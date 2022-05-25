//
// Created by Dmitry Morozov on 23/4/22.
//



#include <iostream>


using namespace std;

class Student {
public:

    void set_average_ball (float ball) {
        average_ball = ball;
    }

    float get_average_ball () {
        return average_ball;
    }

    std::string name;
    std::string last_name;
    int scores = 5;

private:
    float average_ball;
};





class Animal {
public:
    int age;
    string name;

    void setPrice (int pr) {
        price = pr;
    }

    int getPrice () {

        return price;
    };
private:
    int price;
};

class Dog : public Animal {
//TODO: Расширить класс Dog и добавить в него поле для веса и поле для породы.
//TODO: Добавить в класс Dog метод для подачи голоса.
};

class Cat : public Animal {
    //TODO: Расширить класс Cat и добавить в него поле для веса и поле для породы.
    //TODO: Добавить в класс Cat метод для подачи голоса.
};

int main () {
    Dog a;
    a.setPrice (4);
    cout << a.getPrice ();
}

