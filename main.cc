//
//  main.cpp
//  interpreter
//
//  Created by Sr on 2022/5/20.
//  Copyright © 2022年 Sr. All rights reserved.
//

#include <iostream>
#include "interpreter.h"
#include "buffer_manager.h"

BufferManager buffer_manager;

int main(int argc, const char * argv[]) {
    std::cout<<">>> Welcome to MiniSQL"<<std::endl;
    while(1){
        Interpreter query;
        query.getQuery();
        query.EXEC();
    }
    return 0;
}
