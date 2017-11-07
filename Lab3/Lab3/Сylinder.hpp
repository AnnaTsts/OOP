//
//  Сylinder.hpp
//  Lab3
//
//  Created by Анна Цицилюк on 05.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef _ylinder_hpp
#define _ylinder_hpp
#include "Figure.hpp"
#include <stdio.h>
class Cylinder:public Figure
{
public:
    Cylinder();
    float Area();
    float Volume();
};

#endif /* _ylinder_hpp */
