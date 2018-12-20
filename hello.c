#include <stdio.h>
// #include <iostream>

int main(){
    puts("C Rocks");  
    printf("Hello World\n");
    // std::cout << "hello world"; 
    char name[11];
    puts("Please enter your name:");
    scanf("10%s", name);
    puts("Your name is: ");
    
    printf("You entered %s \n", name);
    return 0;
}