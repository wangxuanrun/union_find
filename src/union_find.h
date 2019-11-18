#include <vector>
using namespace std;
class UF
{
public:
    UF(int N);
public:
    void Union(int q, int p){

    };
    int find(int p){
        return id[p];
    };
    bool connected(int q, int p);
    int Count();
private:
    vector<int> id;
    int count;
};