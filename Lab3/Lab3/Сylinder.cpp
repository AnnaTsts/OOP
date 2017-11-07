//
//  Сylinder.cpp
//  Lab3
//
//  Created by Анна Цицилюк on 05.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "Сylinder.hpp"
Cylinder::Cylinder()
{
    do{
    std::cout<<"Введіть радіус та висоту циліндра"<<std::endl;
    std::cin>>radius>>height;
    }
    while(radius<0&&height<0);
}

float Cylinder:: Area()
{
    
    float S;
    S=(2*pi*radius*height)+(2*pi*radius*radius);
    return S;
}
float Cylinder::Volume()
{
    float V;
    V=pi*radius*radius*height;
    return V;
}
