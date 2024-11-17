#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using std::string, std::vector;

class StockLoader{
    private:
        string ticker;
        vector<vector<string>> BS;
        vector<vector<string>> CF;
        vector<vector<string>> IS;
        
    public:
        StockLoader(string ticker);
        vector<vector<string>> loadArray(string filename);
        //to access the arrays
        vector<vector<string>> getBS();
        vector<vector<string>> getCF();
        vector<vector<string>> getIS();

};

StockLoader::StockLoader(string ticker){
    this->ticker = ticker;
    BS = loadArray("Stocks/" + ticker + "/" + ticker + "_BS.csv");
    CF = loadArray("Stocks/" + ticker + "/" + ticker + "_CF.csv");
    IS = loadArray("Stocks/" + ticker + "/" + ticker + "_IS.csv");

}

vector<vector<string>> StockLoader::loadArray(string filename){
    std::ifstream stream(filename);
    vector<vector<string>> ary;
    
    if(!stream.is_open()){
        std::cout << "File could not be opened." << std::endl;
    }

    string line;

    while (getline(stream, line)) {
        std::stringstream ss(line); // Use stringstream to split each line by comma
        string cell; //the entry
        vector<string> row;
        
        // Read each value separated by commas
        while (getline(ss, cell, ',')) {
            row.push_back(cell);  // Store each cell in the vector
        }

        ary.push_back(row);
    }
    
    return ary;

}

vector<vector<string>> StockLoader::getBS(){
    return BS;
}

vector<vector<string>> StockLoader::getCF(){
    return CF;
}

vector<vector<string>> StockLoader::getIS(){
    return IS;
}


int main(){
    //testing stuff
    // StockLoader l = StockLoader("AAPL");
    // for (const auto& row : l.getBS()) {
    //     for (string element : row) {
    //         std::cout << element << " ";
    //     }
    //     std::cout << std::endl;
    // }
    return 0;
}