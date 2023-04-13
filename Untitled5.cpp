#include <iostream>
using namespace std;

void vPtr(void* p, char type)
{
    if (type == 'i')
    {
        for (int i = 0; i < *(int *)p;i++) {
            cout << "ing" << endl;
        }
    }
    else if (type == 'c')
    {
        cout << "ceng " << *(char*)p << endl;
    }
}

int main() {
    
char b = 'k';
void *x = &b;
vPtr(x, 'c');
    return 0;
}

