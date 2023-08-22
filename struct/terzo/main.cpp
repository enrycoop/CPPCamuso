#include <iostream>

using namespace std;

struct t_punto3D
{
    long double x, y, z;
};

t_punto3D* punto_medio_3D(const t_punto3D* a, const t_punto3D* b){
    long double x = ( a->x + b->x ) / 2;
    long double y = ( a->y + b->y ) / 2;
    long double z = ( a->z + b->z ) / 2;
    return new t_punto3D {x,y,z};
}

int main()
{

    cout << sizeof(t_punto3D) << endl;
    cout << sizeof(t_punto3D*) << endl;

    t_punto3D *a = new t_punto3D {-4, 2, 8},
              *b = new t_punto3D {6, 12, 56};

    t_punto3D *medio = punto_medio_3D(a,b);

    cout << "x: " << medio->x
         << "\ny: " << medio->y
         << "\nz: " << medio->z << endl;

    delete a; delete b; delete medio;
    return 0;
}
