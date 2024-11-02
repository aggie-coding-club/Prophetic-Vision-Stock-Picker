#include <cstdlib>
#include <string>

void sys_call(const std::string& command) {
    std::system(command.c_str());
}

void download_files() {
    sys_call("rm -rf ./data");
    sys_call("kaggle datasets download -d andrewmvd/sp-500-stocks -p ./data");
    sys_call("unzip ./data/sp-500-stocks.zip -d ./data");
}

int main() {
    download_files();
}