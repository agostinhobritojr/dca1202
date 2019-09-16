#include <sculptor.h>
#include <fstream>
#include <iostream>
using namespace std;



Sculptor::Sculptor(int _nx, int _ny, int _nz)
{

    Voxel ***v = new Voxel**[_nx];
    for (int i = 0; i < _nz; ++i) {
      v[i] = new Voxel*[_ny];
      for (int j = 0; j < _ny; ++j)
        v[i][j] = new Voxel[_nz];
    }
}

Sculptor::~Sculptor()
{

    for(int i = 0; i < nx; i++)
    {
        for(int j = 0; j < ny; j++)
        {
            delete[] v[i][j];

            delete[] v[i];
        }

    }
    delete[] v;
}

void Sculptor::setColor(float r, float g, float b, float alpha)
{
    this-> r = r;
    this-> g = g;
    a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{
    if( x <= nx && y <= ny && z <= nz )
    {
    v[x][y][z].isOn=true
    v[x][y][z].r=r ;
    v[x][y][z].g=g ;
    v[x][y][z].b=b ;
    v[x][y][z].a=a ;

    }
}

void Sculptor::cutVoxel(int x, int y, int z)
{
    v[x][y][z].isOn=false;

}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    
}




