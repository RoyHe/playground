//
// Created by He Ruoyun on 17/3/20.
//

#ifndef PLAYGROUND_BASEPREDICTOR_H
#define PLAYGROUND_BASEPREDICTOR_H
#pragma once

#include <memory>
#include <string>
#include <map>

class BasePredictor{
public:

    static std::unique_ptr<BasePredictor> CreatePredictor(std::string s);


    virtual void test() = 0;

    typedef std::unique_ptr<BasePredictor> (*Creator)();
    static std::map<std::string, Creator>& factory_map(){
        static std::map<std::string, Creator>* g_registry_ = new std::map<std::string, Creator>();
        return *g_registry_;
    }



};

#endif //PLAYGROUND_BASEPREDICTOR_H
