//
//  Cone.hpp
//  Lab3
//
//  Created by Анна Цицилюк on 05.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef Cone_hpp
#define Cone_hpp

#include "Figure.hpp"
#include <stdio.h>
class Cone:public Figure
{
public:
    Cone();
    float Area();
    float Volume();
};

#endif /* Cone_hpp */
