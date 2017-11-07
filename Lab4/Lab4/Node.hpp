//
//  Node.hpp
//  Lab4
//
//  Created by Анна Цицилюк on 02.11.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
#include "Array.hpp"
#include <stdio.h>
#include <string>
class Arr;
class Node

{
    friend Arr;
private:
    std:: string key;
    std:: string value;
    
public:
    Node();
    Node(std::string);
    Node(std::string,std::string);
    int FindKey(std::string);
    
    std::string& operator [](int);
    
};

#endif /* Node_hpp */
