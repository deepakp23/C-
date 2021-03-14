#include<iostream>
#include<climits>   // to know the limit.

int main()
{
    
    short a;
    int b;    // atleast 16 bit at max 32 bit
    long c;     // atleast 32 bit
    long long d;  // atleast 64 bit
    
    // short <= int <= long <= long long
    
    
    // each integral will have unsigned counterpart.
    // unsigned only allows positive value.
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;
    //int x = 9999999999999;   // check this for error
    
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    
    
    std::cout<<SHRT_MAX<<std::endl;
    std::cout<<SHRT_MIN<<std::endl;
    
    std::cout<<USHRT_MAX<<std::endl;
    
    // similarly there are methods for other integral.
    
}