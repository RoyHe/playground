//
// Created by He Ruoyun on 17/3/20.
//

#include "BasePredictor.h"
#include "PredictorA.h"
#include "PredictorB.h"

std::unique_ptr<BasePredictor> BasePredictor:: CreatePredictor(std::string s)
{

    return (*(factory_map()[s]))();
    /*
    if (s == "PredictorA")
    {
        return std::unique_ptr<BasePredictor>(new PredictorA());
    }
    if (s == "PredictorB")
    {
        return std::unique_ptr<BasePredictor>(new PredictorB());
    }
    return std::unique_ptr<BasePredictor>(new PredictorA());
    */
}

