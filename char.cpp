#include<iostream>
#include<climits>   // to know the limit.

int main()
{
    //single quote for char and double quote for Strings.
    
    char x = 'a'; // 8-bit   
    std::cout << x << std::endl;
    
    // char are stored similar to integer but differs on interpretation
    std::cout << (int) x << std::endl;   // type-casting
    
    
    // type-casting is important as it can cause confusion
    
    char xx = 55;
    std::cout << xx << std::endl;  /// we are getting 7 as it is the ASCII value for 55
    std::cout << (int) xx << std::endl; // Here we get expected output
    
    //maximum value is 127
    
    char a = 128;
    std::cout << (int) a << std::endl;  // we will get compliation warning, it will convert 128 to -128
    // this is called as "OVERFLOW", if the number is too large to be stored.. it will start at the very lowest number possible.
    
    unsigned char aa = 129;
    std::cout << (int) aa << std::endl;  //it only stores only positive values hence values reaches to 256.
}