//
//  main.cpp
//  Lab3
//
//  Created by Анна Цицилюк on 05.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.

#include <iostream>
#include "Cone.hpp"
#include "CutCone.hpp"
#include "Сylinder.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"Цицилюк Анна ІП-61 Варіант 19 Рівень В"<<endl<<"Спроектировать иерархию классов: класс фигуры в пространстве и его наследники: цилиндр, конус, усеченный конус. Определить в базовом классе и переопределить в наследниках методы вычисления полной площади поверхности и объема фигуры. Элементы-данные фигур объявляются в базовом классе, а инициализируются в наследниках (элементы данные: радиусы и высота)."<<endl;
    
    int action;
    
    do{
    cout<<"Що створити?(1-циліндр, 2-конус ,3 -зрізаний конус)або введіть 0 для виходу"<<endl;
    cin>>action;
    if(action==1)
    {  Cylinder F;
        cout<<"Площа "<< F.Area()<<endl;
        cout<<"Об'єм "<<F.Volume()<<endl;
    }
        if(action==2)
        {  Cone F;
            cout<<"Площа "<< F.Area()<<endl;
            cout<<"Об'єм "<<F.Volume()<<endl;
        }

        if(action==3)
        {  CutCone F;
            cout<<"Площа "<< F.Area()<<endl;
            cout<<"Об'єм "<<F.Volume()<<endl;
        }
        
    }
    while (action!=0);
    
    return 0;
}
