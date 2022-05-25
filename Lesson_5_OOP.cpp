//
// Created by Dmitry Morozov on 23/4/22.
//
#include <iostream>


class Weapon {
public:
    virtual void Shoot () = 0;

    void foo () {
        std::cout << "Weapon::foo()" << std::endl;
    }
};

class Gun : public Weapon {
public:
    void Shoot () override {
        std::cout << "Bam!" << std::endl;
    }
};


class AutomaticGun : public Gun {
public:
    void Shoot () override {
        std::cout << "Bam! Bam! Bam!" << std::endl;
    }
};

class Bazzoka : public Weapon {
public:
    void Shoot () override {
        std::cout << "BOOOOOOOOM!" << std::endl;
    }
};

class Knife : public Weapon {
public:
    void Shoot () override {
        std::cout << "*Vzjik-Vzjik*" << std::endl;
    }
};

class Player {
public:
    void UseWeapon (Weapon *gun) {
        gun->Shoot ();
        gun->foo ();
    }
};

int main () {
    Gun gun;
    AutomaticGun automaticGun;
    Bazzoka bazzoka;
    Knife knife;
    auto *knifePtr = new Knife;
    Player player;

    player.UseWeapon (&gun);
    player.UseWeapon (&automaticGun);
    player.UseWeapon (&bazzoka);
    player.UseWeapon (knifePtr);
    player.UseWeapon (&knife);

    return 0;
}