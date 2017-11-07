//
//  CutCone.hpp
//  Lab3
//
//  Created by Анна Цицилюк on 05.10.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef CutCone_hpp
#define CutCone_hpp

#include "Figure.hpp"
#include <stdio.h>
class CutCone:public Figure
{
private:float radius2;
    
public:
    CutCone();
    float Area();
    float Volume();
};

#endif /* CutCone_hpp */
