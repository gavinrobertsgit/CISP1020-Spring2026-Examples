#ifndef FERALFRIEND_H
#define FERALFRIEND_H

#include <iostream>
#include <string>

class FeralFriend {
    private:
        std::string name;
        double weight;
        double powerLevel;
        bool status;

        //shared among all objects of type FeralFriend
        static int entropy;

    public:
        //constructors
        FeralFriend();
        FeralFriend(std::string);
        FeralFriend(std::string,double,double,bool);

        //Recruit function to add a new friend
        FeralFriend addFriend(const std::string& n,const double& w,const double& pl, const bool& s);

        //getters
        std::string getName() const;
        double getWeight() const;
        double getPowerLevel() const;
        bool getStatus() const;
        int getEntropy() const;

        //setters
        void setName(std::string);
        void setWeight(double);
        void setPowerLevel(double);
        void setStatus(bool);

        void meow();
        void nap();
        void hiss();
        void printFriend() const;
};

#endif