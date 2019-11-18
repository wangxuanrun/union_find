#include "union_find.h"
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    UF uf(N);
    for(int i=0; i<N; ++i){
        int p,q;
        cin>>p>>q;
        if(uf.connected(p,q)) {
            continue;
        }
        uf.Union(q,p);
        cout<<p<<" "<<q<<endl;
    }
    cout<<uf.Count()<<" components"<<endl;
}