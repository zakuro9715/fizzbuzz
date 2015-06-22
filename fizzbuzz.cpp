#include<cstdio>
int main(int i){i%3&&i%5&&printf("%d",i);printf("Fizz%s "+!!(i%3)*4,"Buzz"+!!(i%5)*4),i<100&&main(i+1);}
