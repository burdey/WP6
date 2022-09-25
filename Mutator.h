//
// Created by Satori on 2022/9/25.
//

#ifndef WP6_MUTATOR_H
#define WP6_MUTATOR_H
#include <iostream>
#include <string>
#include "Individual.h"

class Mutator {
public:
    virtual Individual* mutate(Individual* list, int k)=0;
};

#endif //WP6_MUTATOR_H
