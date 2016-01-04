/*======================================================
    > File Name: message1.h
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月04日 星期一 14时29分04秒
 =======================================================*/

#pragma once

#include "message.h"
#include "factory.h"
#include <iostream>

class Message1 : public Message
{
    public:
        Message1()
        {
            std::cout << "Message1" << std::endl;
        }


        ~Message1()
        {
        
        }

        void foo()override  //自己实现的接口
        {
            std::cout << "Message1" << std::endl;
        }
};

REGISTER_MESSAGE(Message1,"Message1");//通过此将执行Message1构造函数的可调用对象插入到map中
