#include "PreMadeItem.h"
#include <sstream>

PreMadeItem::PreMadeItem(std::string name, std::string size): IceCreamItem(size){
    this->name = name;

    if (size == "small"){
        price = 4;
    }
    else if (size == "medium"){
        price = 6;
    }
    else if (size == "large"){
        price = 7.5;
    }
    else{
        price = 0;
    }
}
PreMadeItem::~PreMadeItem(){
    //nothing as of now
}
std::string PreMadeItem::composeItem(){
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << "Pre-made Size: " << size << "\n";
    ss << "Pre-made Item: " << name << "\n";
    ss << "Price: " << "$" << price << "\n";
    return ss.str();
}
double PreMadeItem::getPrice(){
    return price;
}