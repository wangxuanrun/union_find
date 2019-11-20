#pragma once
#include <vector>
#include "union_find.h"
using namespace std;

class KQU:public UF
{
public:
    KQU(int N);
public:
    virtual void Union(int q, int p);
private:
    int findRoot(int q);
private:
    vector<int> k;
};