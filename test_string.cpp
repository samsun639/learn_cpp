#include <sstream>
#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> strings;
    std::istringstream f("dog;cat;rabit");
    std::string s;
    while(std::getline(f, s, ';')){
        //std::cout << s << std::endl;
        strings.push_back(s);
    }
    for(std::vector<std::string>::iterator iter=strings.begin(); iter!=strings.end(); iter++){
        std::cout << *iter << std::endl;
    }

    return 0;
}
