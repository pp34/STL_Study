#include "main.h"


int&& func( int&& a );


int main( void ){

    trystatement();
    return 0;
}

int&& func(int&& a){

    std::cout << a << std::endl;
    if ( a != 0 )
        return func( static_cast<int&&>( a - 1 ) );
    else
        return 0;
}

//int func(int a){
//    return a;
//}