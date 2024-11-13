#ifndef STOCK_h
#define STOCK_h

#include <string>

class stock
{
private:
    std::string companyName;
    std::string symbol;
    double price;
    double assets;
    double liabilities;
    double inventory;
    double longTermDebt;
    double shareholderEquity;
    double netIncome;
public:
    //constructors
    stock(std::string companyName, std::string symbol);

    //getters
    std::string getCompanyName();
    std::string getSymbol();
    double getPrice();
    double getAssets();
    double getLiabilities();
    double getInventory();
    double getLongTermDebt();
    double getShareholderEquity();
    double getNetIncome();

    //setters
    void setCompanyName(std::string companyName);
    void setSymbol(std::string symbol);
    void setPrice(double price);
    void setAssets(double assets);
    void setLiabilities(double liabilities);
    void setInventory(double inventory);
    void setLongTermDebt(double longTermDebt);
    void setShareholderEquity(double shareholderEquity);
    void setNetIncome(double netIncome);

    //calculated variables
    double currentRatio();
    double quickRatio();
    double DebtToEquityRatio();
    double ROE();
    double ROA();
};
#endif