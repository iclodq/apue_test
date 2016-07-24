#include <iostream>
#include <stdio.h>
using namespace std;

extern void z04_4d3(int argc, char *argv[]);

int main(int argc, char* argv[])
{
    cout << "Hello world!" << endl;
    z04_4d3(argc, argv);

    getchar();
    return 0;
}
