#pragma once
#include <vector>
#include "union_find.h"
using namespace std;
class QF:public UF
{
public:
    QF(int N);
public:
    virtual void Union(int q, int p);
};