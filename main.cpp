#include <iostream>


using namespace std;

#include <vector>
#include <sstream>


vector<string> div (string str) {
    vector<string> str2;
    istringstream ss (str);
    string str3;
    while (ss >> str3)
        str2.push_back (str3);
    return str2;

}
> Ариша Доченька:
#include <iostream>
using namespace std;
class Student {
public:

    void set_average_ball(float ball)
    {
        average_ball = ball;
    }
    float get_average_ball()
    {
        return average_ball;
    }
    std::string name;
    std::string last_name;
    int scores=5;

private:
    float average_ball;
};
int main(){
    Student ars;
    ars.set_average_ball(5);
    ars.get_average_ball();



}

> Ариша Доченька:
#include <iostream>
using namespace std;
class Animal{
public:
    int age;
    string name;
    void setPrice(int pr) {
        price = pr;
    }
    int getPrice() {

        return price;
    };
private:
    int price;
};
class Dog:public Animal{

};
class Cat:public Animal{
};
int main(){
    Dog a;
    a.setPrice(4);
    cout<<a.getPrice();
}


int main () {

    string demo_str = " Hello, World!    My name is Dmitry.   ";
    auto res_vec = div (demo_str);
    for (auto &i : res_vec)
        cout << i << endl;

    return 0;
}
