#include "main.h"

int func( int&& a );


int main( void ){

    //const int *c=0;
    //int *p;
    //// static_cast< int* >( c );    //  �൱��ȥ���ײ��const������
    //// static_cast< char* >( c );   //  �൱����ȥ���ײ��const����ת���ͣ�����
    //p = const_cast< int* >( c );    //  ��������һ����int����Ϊconst_cast����ת������
    ////static_cast< char* >( p );    //  һ����voidָ��ת����

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