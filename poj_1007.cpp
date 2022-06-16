#include <iostream>
#include <string>

using namespace std;

typedef struct dna {
    string str;
    int res;
} dna;

int main() {
    int n, m;
    dna data[100];
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> data[i].str;
        data[i].res = 0;
    }

    //求res
    for (int z = 0; z < m; z++)
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
                if (data[z].str[i] > data[z].str[j])
                    data[z].res++;

    //排序res的同时输出相应的string

    for (int i = 0; i < m; i++) {
        int point = 0;
        for (; point < m && data[point].res == -1; point++);
        int min = data[point].res;
        for (int j = 0; j < m; j++) {
            if (min > data[j].res && data[j].res != -1) {
                min = data[j].res;
                point = j;
            }
        }
        data[point].res = -1;
        cout << data[point].str << endl;
    }


    return 0;
}
