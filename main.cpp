#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char **argv) {
    std::cout<<argc<<std::endl;
    fstream file(argv[1],ios::app);
    for(int i=2;i<argc;i++) {
        file<<argv[i]<<" ";
    }
    file<<std::endl;
    file.close();
}