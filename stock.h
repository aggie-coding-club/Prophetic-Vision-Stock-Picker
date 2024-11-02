#ifndef STOCK_h
#define STOCK_h

#include <string>

class stock
{
private:
    std::string companyName;
    std::string symbol;
    double price;
    // double assets;
    // double liabilities;
    // double grossProfit;
    // double longTermDebt;
    // double shareholderEquity;
    // double netIncome;
public:
    stock(std::string companyName, std::string symbol);
    std::string getCompanyName();
    std::string getSymbol();
    double getPrice();
    void setCompanyName(std::string companyName);
    void setSymbol(std::string symbol);
    void setPrice(int price);

};
#endif