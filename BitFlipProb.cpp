//
// Created by Satori on 2022/9/25.
//

#include "BitFlipProb.h"
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

BitFlipProb::BitFlipProb(double p){
    this->p = p;
}

Individual* BitFlipProb::mutate(Individual* list, int k){
    for (int i=0; i<list->getLength(); i++){
        srand(static_cast<unsigned>(time(0)));
        double p2 = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
        if (p2 <= p){
            list->flipBit(i);
        }
    }
    return list;
}

