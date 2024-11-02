#include "stock.h"

stock::stock(std::string companyName, std::string symbol){
    this->companyName = companyName;
    this ->symbol = symbol;
}
std::string stock::getCompanyName(){
    return companyName;
}
std::string stock::getSymbol(){
    return symbol;
}
double stock::getPrice(){
    return price;
}
void stock::setCompanyName(std::string companyName){
    this->companyName = companyName;
}
void stock::setSymbol(std::string symbol){
    this->symbol = symbol;
}
void stock::setPrice(int price){
    this->price = price;
}