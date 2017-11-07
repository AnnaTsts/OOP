//
//  CutCone.cpp
//  Lab3
//
//  Created by Анна Цицилюк on 05.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "CutCone.hpp"
CutCone::CutCone()
{
    do{
    std::cout<<"Введіть радіус 1 та 2 та висоту зрізаного конуса"<<std::endl;
    std::cin>>radius>>radius2>>height;
    }
     while(radius<0&&height<0&&radius2<0);
    
}
float CutCone:: Area()
{
    float S;
    float l=2*pi*radius;
    S=pi*(radius*radius+(radius2+radius)*l+radius2*radius2);
    return S;
}
float CutCone::Volume()
{
    float V;
    V=(pi*height/3)*(radius*radius+radius2*radius+radius2*radius2);
    return V;
}
