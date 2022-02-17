#include <iostream>
#include <conio.h>

int euclid_gcd(int m, int n){
    int temp;    
    for(int i = m; i%n!=0; n=temp){
        temp = i%n;
        i = n;
    }

    return n;
}



main(){
    int result;

    result = euclid_gcd(205, 123);
    std::cout << result;

    getch();
}