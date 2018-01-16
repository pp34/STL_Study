#include "main.h"


int main( void ){

    //p86_310();
    std::vector<std::string>::iterator iter;
    std::vector<std::string> str{"123"};
    iter = str.begin();

    //std::cout << *iter++ << std::endl;
    std::cout << iter++->empty() << std::endl;


    return 0;
}
