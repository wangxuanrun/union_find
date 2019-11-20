#include "k_quick_union.h"
KQU::KQU(int N):UF(N)
{
    k.resize(N);
    for(int i = 0; i<k.size(); ++i) {
        k[i] = 1;
    }
}

void KQU::Union(int q, int p){
    int root_q = findRoot(q);
    int root_p = findRoot(p);
    if(root_q == root_p) {
        return;
    }
    if (k[root_q] >= k[root_p]) {
        id[root_p] = root_q;
    } else {
        id[root_q] = root_p;
    }  
    --count;
    
}

int KQU::findRoot(int q)
{
    while(id[q] != q) {
        q = id[q];
    }
    return q;
}