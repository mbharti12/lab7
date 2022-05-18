#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include "IceCreamItem.h"

class CustomItem: public IceCreamItem{
    public:
        CustomItem(std::string size);
        virtual ~CustomItem();
        void addTopping(std::string topping);
        virtual std::string composeItem();
        virtual double getPrice();
    private:
        //std::string name;
        std::map<std::string, int> toppings;
};

#endif