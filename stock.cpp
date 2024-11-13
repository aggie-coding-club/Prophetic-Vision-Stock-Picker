#include "stock.h"

//constructors
stock::stock(std::string companyName, std::string symbol) : companyName(companyName), symbol(symbol){}

//getters
std::string stock::getCompanyName(){
    return companyName;
}
std::string stock::getSymbol(){
    return symbol;
}
double stock::getPrice(){
    return price;
}
double stock::getAssets(){
    return assets;
}
double stock::getLiabilities(){
    return liabilities;
}
double stock::getInventory(){
    return inventory;
}
double stock::getLongTermDebt(){
    return longTermDebt;
}
double stock::getShareholderEquity(){
    return shareholderEquity;
}
double stock::getNetIncome(){
    return netIncome;
}

//setters
void stock::setCompanyName(std::string companyName){
    this->companyName = companyName;
}
void stock::setSymbol(std::string symbol){
    this->symbol = symbol;
}
void stock::setPrice(double price){
    this->price = price;
}
void stock::setAssets(double assets){
    this->assets = assets;
}
void stock::setLiabilities(double liabilities){
    this->liabilities = liabilities;
}
void stock::setInventory(double inventory){
    this->inventory = inventory;
}
void stock::setLongTermDebt(double longTermDebt){
    this->longTermDebt = longTermDebt;
}
void stock::setShareholderEquity(double shareholderEquity){
    this->shareholderEquity = shareholderEquity;
}
void stock::setNetIncome(double netIncome){
    this->netIncome = netIncome;
}

//calculated variables
double stock::currentRatio(){
    return assets / liabilities;
}
double stock::quickRatio(){
    return (assets - inventory) / liabilities;
}
double stock::DebtToEquityRatio(){
    return longTermDebt / shareholderEquity;
}
double stock::ROE(){
    return netIncome / shareholderEquity;
}
double stock::ROA(){
    return netIncome / assets;
}