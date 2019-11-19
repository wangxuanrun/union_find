#include "quick_union.h"
QU::QU(int N):UF(N)
{

}

void QU::Union(int q, int p){
    int root_q = findRoot(q);
    int root_p = findRoot(p);
    if(root_q == root_p) {
        return;
    }
    id[root_q] = root_p;
    --count;
    
}

int QU::findRoot(int q)
{
    while(id[q] != q) {
        q = id[q];
    }
    return q;
}