#include "steam.h"

void trystatement(void){

    int a{ 0 }, b{ 0 };
   // double result{ 0.0 };

    while ( 1 )
    {
        std::cout << "Input the first number:_\b";
        std::cin >> a;
        std::cout << "Input the second number:_\b";
        std::cin >> b;
        try
        {
            if ( b == 0 )    
                throw std::runtime_error("除数为0");
        }
        catch ( std::runtime_error err )
        {
            std::cout << err.what() << std::endl    \
                << "重新输入请按1，退出请按0:_\b";
            std::cin >> a;
            if ( !std::cin || a == 0 )    break;
            else continue;
        }
        std::cout << ( static_cast< double >( a ) / ( b ) ) << std::endl;
    }
}





std::istream& read_until_eof( std::istream& streamin){

    char tmp{'\0'};
    while( streamin >> tmp){
        std::cout << tmp;
    }
    std::cout << "\n end of file.\n";
    streamin.clear();
    return streamin;
}



