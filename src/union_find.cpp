#include "union_find.h"

UF::UF(int N)
{
    count = N;
    id.resize(N);
    for(int i = 0; i<id.size(); ++i) {
        id[i] = i;
    }
}

int UF::Count()
{
    return count;
}

bool UF::connected(int q, int p)
{
    return find(q) == find(p);
}
