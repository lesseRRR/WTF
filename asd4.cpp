#include <iostream>
#include <io.h>



int main(){
    _setmode(_fileno(stdout),_O_U16TEXT);
    setlocale(LC_ALL,"Russian");
    int v1[10], v2[10];
    for(int i = 0; i < 10; i++) v1[i] = v2[i];
    std::wcout<<v1[5]<<L"----"<<v2[5]<<std::endl;
    return 0;
}
