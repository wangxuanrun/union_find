#include "union_find.h"
#include "quick_find.h"
#include "quick_union.h"
#include <fstream> 
#include <iostream>
using namespace std;
int testUF(UF *uf, char *str);
const char* filepath = "./union_Find/src/union.txt";
int main()
{
    ifstream file;
    file.open(filepath, ios_base::in);
    if(!file.is_open()) {
        cout<<"open file err:"<<file.eofbit<<"!"<<endl;
        system("pause");
        return 1;
    }
    int N;
    file>>N;
    file.close();

    QF qf(N);
    testUF(&qf,"QF");
    QU qu(N);
    testUF(&qu,"QU");
    system("pause");
}
int testUF(UF *uf, char *str)
{
    cout<<"==========start test "<<str<<"=========="<<endl;
    ifstream file;
    file.open(filepath, ios_base::in);
    if(!file.is_open()) {
        cout<<"open file err:"<<file.eofbit<<"!"<<endl;
        system("pause");
        return 1;
    }
    int N;
    file>>N;
    for(int i=0; i<N; ++i){
        int p,q;
        file>>p>>q;
        if(uf->connected(p,q)) {
            continue;
        }
        uf->Union(q,p);
    }
    cout<<uf->Count()<<" components"<<endl;
    uf->show();
    file.close();
    cout<<"==========end test "<<str<<"=========="<<endl;
}