#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

#include "memobj.h"

class base
{
    memObj obj1;
public:
    //�ù��캯���г�Ա��ʼ���б�
    base():obj1(1)
    {
        cout << "Constructing base\n";
    }
    ~base()
    {
        cout << "Destructing base\n";
    }
};

#endif // BASE_H_INCLUDED
