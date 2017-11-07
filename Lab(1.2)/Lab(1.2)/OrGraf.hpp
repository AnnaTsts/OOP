//
//  OrGraf.hpp
//  Lab(1.2)
//
//  Created by Анна Цицилюк on 21.09.17.
//  Copyright © 2017 Анна Цицилюк. All rights reserved.
//

#include <vector>
#include <stdio.h>
//#ifndef File_hpp
//#define File_hpp
class OrientedGraph     //класс ориентированый граф
{
private:
    int n;          //размерность матрицы смежности
    int **arr;      //сама матрица смежности
    public :
    //  OrientedGraph();
    OrientedGraph(int n);   //конструктор для матрицы смежности
    void Print();           //выведение матрицы расстояния
    ~OrientedGraph();
    void FindVay(int start,int end,std::vector<int> Stek,int size,int **arr);
    // void Find(int n,int m,int **arr);
    void FindAll();
    
    
};
