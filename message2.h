/*======================================================
    > File Name: message2.h
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月04日 星期一 22时51分46秒
 =======================================================*/
#pragma once

#include "message.h"
#include "factory.h"
#include <iostream>

class Message2 : public Message
{
    public:
        Message2()
        {
            std::cout << "Message2" << std::endl;
        }

        Message2(int a)
        {
            std::cout<< "Message2" <<std::endl;
        }

        ~Message2()
        {
        
        }

        void foo()override
        {
            std::cout << "Message2" << std::endl;
        }
};

REGISTER_MESSAGE(Message2,"Message2");
