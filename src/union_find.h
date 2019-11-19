#pragma once
#include <vector>
using namespace std;
class UF
{
public:
    UF(int N);
public:
    virtual void Union(int q, int p) = 0;
    virtual int find(int p){
        return id[p];
    };
    virtual bool connected(int q, int p);
    virtual int Count();
    void show();
public:
    vector<int> id;
    int count;
};