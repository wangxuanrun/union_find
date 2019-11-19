#pragma once
#include <vector>
#include "union_find.h"
using namespace std;

class QU:public UF
{
public:
    QU(int N);
public:
    virtual void Union(int q, int p);
private:
    int findRoot(int q);
};