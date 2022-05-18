#include "CustomItem.h"
//#include <utility>

CustomItem::CustomItem(std::string size): IceCreamItem(size){
    //this->name = name;

    if (size == "small"){
        price = 3;
    }
    else if (size == "medium"){
        price = 5;
    }
    else if (size == "large"){
        price = 6.5;
    }
    else{
        price = 0;
    }
}
CustomItem::~CustomItem(){
    //nothing as of now
}

void CustomItem::addTopping(std::string topping){
    std::map<std::string, int>::iterator it = toppings.find(topping);

    if (it == toppings.end()){
        //key not found
        toppings.insert({topping, 1});
    }
    else{
        //key found
        it->second++;
    }
    price+=(0.4);
    //std::pair<int,string>(topping,"Peter")
}
std::string CustomItem::composeItem(){
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << "Custom Size: " << size << "\n";
    ss << "Toppings:\n";
    for (auto p: toppings){
        ss << p.first << ": " << p.second << " oz" << "\n";
    } 
    ss << "Price: " << "$" << price << "\n";

    return ss.str();
}
double CustomItem::getPrice(){
    return price;
}