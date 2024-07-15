#pragma once

//Header-Files
#include "Travel.h"
#include "memory"

class Customer {
public:

    Customer(long id, string lastName, string firstName) : id{id}, lastName{lastName}, firstName{firstName} {}

    int amountTravel() { return travelList.size(); }

    void addTravel(shared_ptr <Travel> travel);

    //Getter
    long getId() { return id; }

    string getName() { return firstName + " " + lastName; }

    string getFirstName() { return firstName; }

    string getLastName() { return lastName; }

    vector <shared_ptr<Travel>> getTravelList() { return travelList; }

private:
    long id;
    string lastName;
    string firstName;
    vector <shared_ptr<Travel>> travelList;
};
