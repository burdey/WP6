//
// Created by Satori on 2022/9/25.
//

#include "Individual.h"
#include <iostream>
#include <string>
using namespace std;

Individual::Individual() {}

Individual::Individual(string str){
    length=str.size();
    for (int i=0; i<length; i++) {
        copy_List[i]='0';
    }
    binaryString=str;
}

string Individual::getString(){
    return binaryString;
}

int Individual::getBit(int pos){
    if (binaryString[pos]=='1'){
        return 1;
    }
    if (pos>length){
        return -1;
    }
    return 0;
}

int Individual::getMaxOnes(){
    int SumOnes=0;
    int MaxOnes=0;
    for (int i = 0; i <length; i++){
        if (SumOnes>MaxOnes){
            MaxOnes=SumOnes;
        }
        if (binaryString[i]=='1'){
            SumOnes+=1;
        }
        else if (binaryString[i]=='0'){
            SumOnes=0;
        }
    }
    return MaxOnes;
}

int Individual::getLength(){
    return length;
}

void Individual::flipBit(int pos){
    if (binaryString[pos]=='1'){
        binaryString[pos]='0';
    }
    else{
        binaryString[pos]='1';
    }
}

void Individual::copyBit(int pos){
    int count=0;
    for (int i=0; i<length; i++) {
        if (i<length-pos){
            copy_binaryString[i]=binaryString[pos+i];
            count++;
        }
        else{
            copy_binaryString[i]=binaryString[i-count];
        }
    }
    for (int i = 0; i < length; i++) {
        binaryString[i]=copy_binaryString[i];
    }
}

Individual::~Individual() {}
