#include<iostream>
#define O(x,y)x?std::cout<<y:0;
int main(){for(int i=0;i<101;){O(++i%3&&i%5,i)O(!(i%3),"Fizz")O(!(i%5),"Buzz")O(1," ")}}
