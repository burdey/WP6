//
// Created by Satori on 2022/9/25.
//

#ifndef WP6_INDIVIDUAL_H
#define WP6_INDIVIDUAL_H
#include <iostream>
#include <string>


class Individual {
private:
    std::string binaryString;
    std::string copy_List;
    std::string copy_binaryString;
    int length;
public:
    Individual();
    Individual(std::string bin_str);
    std::string getString();
    int getBit(int pos);
    int getMaxOnes();
    int getLength();
    void flipBit(int pos);
    void copyBit(int pos);
    ~Individual();
};


#endif //WP6_INDIVIDUAL_H
