#include "quick_find.h"
QF::QF(int N):UF(N)
{

}

void QF::Union(int q, int p){
    if (id[q] == id[p]) {
        return;
    }
    float temp_id_q = id[q];
    float temp_id_p = id[p];
    for (int i = 0; i < id.size(); ++i) {
        if (temp_id_p == id[i]) {
            id[i] = temp_id_q;
        }
    }
    --count;
    
}