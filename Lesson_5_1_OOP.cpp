//
// Created by Dmitry Morozov on 24/4/22.
//

#include <iostream>
#include <istream>

class Human {
public:
    Human(int age, int weight, int height) : age(age), weight(weight), height(height) {}
   friend std::ostream & operator<<(std::ostream& os, const Human& human) {
       os << "age: " << human.age << " weight: " << human.weight << " height: " << human.height;
       return os;
   }

private:
    int age;
    int weight;
    int height;
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
