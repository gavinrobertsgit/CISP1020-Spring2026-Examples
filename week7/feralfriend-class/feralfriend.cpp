#include "feralfriend.h"

int FeralFriend::entropy = 0;

//Default constructor
FeralFriend::FeralFriend() {
    name = "Unknown";
    weight = 0;
    powerLevel = 0;
    status = 0;
    std::cout << "FeralFriend was summoned." << std::endl;
}

//1 arg constructor
FeralFriend::FeralFriend(std::string n) {
    name = n;
    weight = 0;
    powerLevel = 0;
    status = 0;

    std::cout << name << " was summoned." << std::endl;
}

//4 arg constructor
FeralFriend::FeralFriend(std::string n,double w, double pl, bool s) {
    name = n;
    weight = w;
    powerLevel = pl;
    status = s;

    std::cout << name << " was summoned with power level of: " << pl << "." << std::endl;
}

//Recruit function
FeralFriend FeralFriend::addFriend(const std::string& n,
    const double& w,const double& pl, const bool& s) {
    std::cout << name << " recruits a new friend!\n";
    return FeralFriend(n,w,pl,s);
}

std::string FeralFriend::getName() const {
    return name;
}

double FeralFriend::getWeight() const {
    return weight;
}

double FeralFriend::getPowerLevel() const {
    return powerLevel;
}

bool FeralFriend::getStatus() const {
    return status;
}

int FeralFriend::getEntropy() const {
    return entropy;
}

void FeralFriend::setName(std::string n) {
    name = n;
}

void FeralFriend::setWeight(double w) {
    weight = w;
}

void FeralFriend::setPowerLevel(double p) {
    powerLevel = p;
}

void FeralFriend::setStatus(bool s) {
    status = s;
}

void FeralFriend::meow() {
    std::cout << "meow!! >^o^<" << std::endl;
    //each time a friend meow, 
    //increase collective entropy by 10
    entropy += 10; 
}

void FeralFriend::nap() {
    std::cout << name << " takes a nap zzZZzzZ >-.-<" << std::endl;
    entropy -= 15; 
}

void FeralFriend::hiss() {
    std::cout << name << " hisses KKkkkgghh >v.v<" << std::endl;
    entropy += 20; 
}

void FeralFriend::printFriend() const {
    std::cout << "Name: " << name
              << "\nWeight: " << weight
              << "\nPower Level: " << powerLevel
              << "\nStatus: ";

    if (status) {
        std::cout << "GOD STATUS";
    } else {
        std::cout << "Mortal Now";
    }

    std::cout << std::endl;
}