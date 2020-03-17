//
// Created by He Ruoyun on 17/3/20.
//

#ifndef PLAYGROUND_PREDICTORB_H
#define PLAYGROUND_PREDICTORB_H
#pragma once

#include <iostream>
#include "BasePredictor.h"

class PredictorB: public BasePredictor{
public:
    PredictorB()  {
        std::cout << "Construct PredictorB" << std::endl;
    }
    void test()
    {
        std::cout << "Test B" << std::endl;
    }


};



class PredictorBFactory {
public:
    PredictorBFactory()
    {
        insertself();
    }
    static std::unique_ptr<BasePredictor> create() {
        return std::unique_ptr<BasePredictor>(new PredictorB());
    }

    static void insertself() {
        BasePredictor::factory_map().insert(std::make_pair("PredictorB", create));
    }
};

static PredictorBFactory factoryb;

//static PredictorB testtest;


#endif //PLAYGROUND_PREDICTORB_H
