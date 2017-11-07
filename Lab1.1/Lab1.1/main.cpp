//
//  main.cpp
//  Lab1.1
//
//  Created by Анна Цицилюк on 20.09.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include <iostream>
#include "File.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout<<"Введіть кількість вершин графу";
    cin>>n;
    OrientedGraph MyGraf(n);        //заполнение матрицы
    MyGraf.Print();                 //выведение матрицы
    int m;
    do{
    cout<<"Знайти шлях?(1-так/0-ні)";
    cin>>m;
        if(m)
    MyGraf.FindAll();               //поиск путей
    }while (m);
    
    return 0;
}
