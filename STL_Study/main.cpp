#include "main.h"


int main(void){

    //p86_310();
    int n{ 0 };
    std::string tmp1{ "����\n" }, tmp2{ "ż��\n" };
    std::string tmp;
    while(1){
        std::cin >> n;
        tmp = ( ( n % 2 ) == 0 ) ? tmp2 : tmp1;
        std::cout << tmp << std::endl;
    }
    return 0;
}
