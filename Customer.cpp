#include "Customer.h"

void Customer::addTravel(shared_ptr<Travel> travel) {

    travelList.push_back(travel);
}
