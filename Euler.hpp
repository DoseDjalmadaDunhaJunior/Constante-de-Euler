//
// Created by josé djalma da cunha júnior on 2019-06-09.
//

#ifndef CONSTANTE_E_EULER_HPP
#define CONSTANTE_E_EULER_HPP
#include <iostream>
using namespace std;
#define pre 100
#define exp25 15511210043330985984000000
class Euler {
public:
//private:
    void ver(){
    //cout<<exp25<<endl;
}
    int exponencial(int num){
    long int var;
    var = num;
        for (int i = (num-1); i > 0; i--) {
            var = var * i;
        }
        return var;
}

private:
    //long long int exp25 = 15511210043330985984000000;
};


#endif //CONSTANTE_E_EULER_HPP
