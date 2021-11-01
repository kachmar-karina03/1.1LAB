//UnitTest.h
#pragma once
#include "point.h"
using namespace std;

void unitTestPositive(){
    Point a (3.0, 4.0); 
    double res=a.distance();
    if (res!=5.0){
        std::cout<<"Test0 failed"<<std::endl;
    
    }
    else{
        std::cout<<"Test0 passed"<<std::endl;
    }

}
void unitTestPositive1(){
    Point a (5.0, 12.0); 
    double res=a.distance();
    if (res!=13.0){
        std::cout<<"Test1 failed"<<std::endl;
    }
    else{
        std::cout<<"Test1 passed"<<std::endl;
    }
}
void unitTestPositive2(){
    Point a (-8.0, -15.0); 
    double res=a.distance();
    if (res!=17.0){
        std::cout<<"Test2 failed"<<std::endl;
    }
    else{
        std::cout<<"Test2 passed !!!"<<std::endl;
    }
}
