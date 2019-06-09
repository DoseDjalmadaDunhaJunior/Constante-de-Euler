//
// Created by josé djalma da cunha júnior on 2019-06-09.
//

#ifndef CONSTANTE_E_BIGNUMBER_HPP
#define CONSTANTE_E_BIGNUMBER_HPP
#include <iostream>
#include "StringChar.hpp"
#define exp25 15511210043330985984000000
#define valor 1000
#define mini 155112100
using namespace std;
class BigNumber {
public:
    void teste(int num){
        StringChar converte;
        string a1 = converte.converte(num);
        zeraGG(gg1);
        trans(a1);
        *gg1 = *vet;
        cout<<gg1<<endl;
    }



private:
    void trans(const string &txt){
        vet = (char*) malloc((sizeof(char))*txt.size());
        strcpy(vet,txt.c_str());
        vet[txt.size()] = '\n';
    }
    char gg1[valor];
    char *vet;
    char gg2[valor];
    int corrido = 0;
    int valO = (valor - 1) - corrido;
    void zeraGG(char* gg){
        for (int i = 0; i < valor; i++) {
            gg[i] = 0;
        }
    }
};


#endif //CONSTANTE_E_BIGNUMBER_HPP
