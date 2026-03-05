#include <iostream>
#include <string>
#include <vector>
#include "feralfriend.h"

int main() {
    FeralFriend fred;
    FeralFriend garfield("Garfield");
    FeralFriend taco("Taco",15,1000000000,0);

    std::vector<FeralFriend> colony;

    fred.setName("Fred");

    fred.setWeight(600);
    fred.setPowerLevel(9001);
    fred.setStatus(true);

    //add fred to the colony
    colony.push_back(fred);
    colony.push_back(taco);
    colony.push_back(garfield);
    colony.pop_back(); //remove the element at the end

    //loop over all the friends in the colony
    //and print their info out
    for(int i=0;i < (int) colony.size() ;i++) {
        colony[i].printFriend();
    }

    fred.meow();
    taco.nap();
    garfield.hiss();

    std::cout << "current entropy level: " 
    << taco.getEntropy() << std::endl;

    colony.push_back(taco.addFriend("Tippy",5,2,false));

    for(int i=0;i < (int) colony.size() ;i++) {
        colony[i].printFriend();
    }
    return 0;
}