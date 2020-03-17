//
// Created by He Ruoyun on 17/3/20.
//

#ifndef PLAYGROUND_PREDICTORA_H
#define PLAYGROUND_PREDICTORA_H

#pragma once

#include "BasePredictor.h"
#include <iostream>
class PredictorA : public BasePredictor{
public:
    PredictorA(){
        std::cout << "Construct PredictorA" << std::endl;
    }
    void test()
    {
        std::cout << "Test A" << std::endl;
    }



};


class PredictorAFactory {
public:
    PredictorAFactory()
    {
        insertself();
    }
    static std::unique_ptr<BasePredictor> create() {
        return std::unique_ptr<BasePredictor>(new PredictorA());
    }

    static void insertself() {
        BasePredictor::factory_map().insert(std::make_pair("PredictorA", create));
    }
};
static PredictorAFactory factorya;






#endif //PLAYGROUND_PREDICTORA_H
