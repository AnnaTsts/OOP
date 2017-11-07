//
//  Figure.hpp
//  Lab3
//
//  Created by Анна Цицилюк on 05.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef Figure_hpp
#define Figure_hpp
#include <iostream>
#include <stdio.h>
class Figure
{
protected:
    float pi;
    float radius;
    float height;
public:
    Figure();
    virtual float Area()=0;
    virtual float Volume()=0;
};

#endif /* Figure_hpp */
