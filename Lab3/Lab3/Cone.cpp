//
//  Cone.cpp
//  Lab3
//
//  Created by Анна Цицилюк on 05.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "Cone.hpp"

Cone::Cone()
{
    do{
    std::cout<<"Введіть радіус та висоту конуса"<<std::endl;
    std::cin>>radius>>height;
    }
     while(radius<0&&height<0);
}
float Cone:: Area()
{
    float S;
    float l=2*pi*radius;
    S=pi*radius*(radius+l);
    return S;
}
float Cone::Volume()
{
    float V;
    V=(pi*radius*radius*height)/3;
    return V;
}
