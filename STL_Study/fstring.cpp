#include "fstring.h"

void p86_36( void ){
    std::string str, tmp;
    while ( getline( std::cin, tmp ) )
    {
        if ( !tmp.empty() )             // 忽略无效输入
        {
            str = tmp;
            for ( char &c : tmp ) { c = 'x'; }
            std::cout << str << std::endl;
            std::cout << tmp << std::endl;
        }
    }
}

void p86_310( void ){
    std::string str, tmp;
    while ( getline( std::cin, tmp ) )
    {
        if ( !tmp.empty() )             // 忽略无效输入
        {
            //  把标点转成空格
            //for ( char &c : tmp ) { 
            //    if(ispunct(c)){ c = ' '; }              
            //}
            //  把标点去掉再拼接
            for( char &c : tmp ){
                if(!ispunct(c)){
                    str += c;
                }
            }
            std::cout << str << std::endl;
            std::cout << tmp << std::endl;
            str.clear();        // C++ Standard 表示不会导致内存被释放
            tmp.clear();
        }
    }
}







std::string str_toupper( std::string str){

    std::string tmp;
    /*  Before C++11
    size_t length = str.size();
    for(size_t i = 0; i < length; i++){
        tmp += std::toupper(str[i]);
    }*/
    //  After C++11
    //decltype( str.size() ) length = str.size();
    //for(auto c:str){
    //    tmp += c;
    //}
    //  Or
    if ( !str.empty() )
    {
        for ( auto &c : str )
        {
            c = std::toupper( c );  //  引用就是用别名，指向的地址一样，能更改
        }
    }
    return str;
}

void p81_35( void ){
    std::string str,tmp;
    while(getline(std::cin, tmp )){
        str += tmp;
        str += ' ';
        tmp = str_toupper( str );
        std::cout << str << std::endl;
        std::cout << tmp << std::endl;
    }
}


void p81_34( void ){

    std::string str1, str2;
    int COM_FLAG = 0;
    do
    {
        std::cout << "Please Input the First String:" << std::endl;
        std::cin >> str1;
        std::cout << "Please Input the Second String:" << std::endl;
        std::cin >> str2;
        COM_FLAG = str1.compare( str2 );
        if ( COM_FLAG < 0 )
        {                               // str1 < str2
            std::cout << "Bigger String:" << str2 << std::endl;
        }
        else if ( COM_FLAG > 0 )
        {                               // str1 > str2
            std::cout << "Bigger String:" << str1 << std::endl;
        }
        else
        {                               // str1 = str2
            std::cout << "The First String:" << str1 << std::endl;
            std::cout << "The Second String:" << str2 << std::endl;
        }
    } while ( str1 != str2 );
}

void p81_32(void){

    std::string str;
    while(std::cin>>str)                //  一次读一个单词
    //while (getline( std::cin, str))   //  一次读一行
    {
        std::cout << str << std::endl;
    }
}