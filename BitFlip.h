//
// Created by Satori on 2022/9/25.
//

#ifndef WP6_BITFLIP_H
#define WP6_BITFLIP_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlip:public Mutator {
private:
    int length_List;
    int reminder;
public:
    Individual* mutate(Individual* list, int k);
};


#endif //WP6_BITFLIP_H


