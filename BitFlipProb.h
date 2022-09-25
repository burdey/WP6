//
// Created by Satori on 2022/9/25.
//

#ifndef WP6_BITFLIPPROB_H
#define WP6_BITFLIPPROB_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlipProb:public Mutator{
private:
    double p;
public:
    Individual* mutate(Individual* list, int k);
};


#endif //WP6_BITFLIPPROB_H
