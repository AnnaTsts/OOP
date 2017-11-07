//
//  Node.cpp
//  Lab4
//
//  Created by Анна Цицилюк on 02.11.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include "Node.hpp"
Node::Node()
{
key="0";
    value="zero";
    
}

Node::Node(std::string k,std::string v)
{
    key=k;
    value=v;
}

int Node::FindKey(std::string v)
{
    int k    ;
    k=v.length();
    return k;
}

Node::Node(std::string v)
{
    key=this->FindKey(v);
    value=v;
}

std::string &Node::operator[](int l)
{
if(l==0)
    return key;
    return value;
}
