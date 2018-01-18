#include "main.h"

int func( int&& a );


int main( void ){

    //const int *c=0;
    //int *p;
    //// static_cast< int* >( c );    //  相当于去掉底层的const，报错
    //// static_cast< char* >( c );   //  相当于先去掉底层的const，再转类型，报错
    //p = const_cast< int* >( c );    //  这里类型一定是int，因为const_cast不能转换类型
    ////static_cast< char* >( p );    //  一般是void指针转其他

    std::cout << b << std::endl;


    //p86_310();
    //std::vector<int>::iterator iter;
    //
    //std::vector<int> num{1,2,3,4,5,6,7,8,9,10};
    //int tmp{ 0 };
    //iter = num.begin();

    //for ( auto i = num.begin(); i != num.end() && isspace( *i ); ++i )
    //{
    //    if ( ( *i ) % 2 != 0 )
    //    {
    //        tmp = ( *i );
    //        tmp = tmp * 2;
    //    }
    //    std::cout << tmp << std::endl;
    //}

    return 0;
}

int func(int&& a){

    std::cout << a << std::endl;
    if ( a != 0 )
        return func( std::move( a - 1 ) );
    else
        return 0;
}

//int func(int a){
//    return a;
//}