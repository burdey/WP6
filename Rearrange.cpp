//
// Created by Satori on 2022/9/25.
//

#include "Rearrange.h"
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>
using namespace std;

Individual* Rearrange::mutate(Individual* list, int k){
    length_List=list->getLength();
    reminder=k % length_List;
    if (reminder==0) {
        reminder=length_List-1;
    }
    else{
        reminder=reminder-1;
    }
    list->copyBit(reminder);
    return list;
}

