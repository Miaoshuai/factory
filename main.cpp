/*======================================================
    > File Name: main.cpp
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年01月04日 星期一 14时39分47秒
 =======================================================*/

#include "message1.h"
#include "message2.h"
#include "message.h"

int main(int argc,char **argv)
{
  Message *p = Factory::produce("Message1");
  Message *p1 = Factory::produce("Message2");
  p->foo();
  p1->foo();
  delete p;
  delete p1;

  return 0;
}
