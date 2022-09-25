//
// Created by Satori on 2022/9/25.
//
#ifndef WP6_REARRANGE_H
#define WP6_REARRANGE_H
#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"


class Rearrange:public Mutator {
private:
    int length_List;
    int reminder;
public:
    Individual* mutate(Individual* list, int k);
};


#endif //WP6_REARRANGE_H
