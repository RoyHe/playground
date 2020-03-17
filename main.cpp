#include <iostream>
#include "BasePredictor.h"
#include "PredictorB.h"
#include "PredictorA.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    //PredictorBFactory::insertself();
    //PredictorAFactory::insertself();
    auto ptr1 = BasePredictor::CreatePredictor("PredictorA");
    auto ptr2 = BasePredictor::CreatePredictor("PredictorB");
    ptr1->test();
    ptr2->test();
    return 0;
}
