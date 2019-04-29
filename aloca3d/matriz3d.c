#include <stdio.h>
#include <stdlib.h>

int main(void){
  u_char ***x;
  int nx, ny, nz, i, j, k;
  float rx, ry, rz;
  float dist;
  
  printf("digite as dimensoes (nx, ny, nz): ");
  scanf("%d %d %d", &nx, &ny, &nz);

  rx = nx/2;
  ry = ny/2;
  rz = nz/2;
  
  x = malloc(nz * sizeof(u_char**));
  x[0] = malloc(nz*ny* sizeof(u_char*));
  x[0][0] = malloc(nx*ny*nz*sizeof(u_char));
  for(i=1; i<nz; i++){
	x[i] = x[i-1] + ny;
  }
  for(i=1; i<nz*ny; i++){
	x[0][i] = x[0][i-1] + nx;
  }
  for(i=0; i<nz; i++){
	for(j=0; j<ny; j++){
	  for(k=0; k<nx; k++){
		x[i][j][k] = 0;
	  }
	}
  }
  for(i=0; i<nz; i++){
	for(j=0; j<ny; j++){
	  for(k=0; k<nx; k++){
		dist = (i-nz/2.0)*(i-nz/2.0)/(rz*rz)+
		  (j-ny/2.0)*(j-ny/2.0)/(ry*ry)+
		  (k-nx/2.0)*(k-nx/2.0)/(rx*rx);
		if(dist <= 1){
		  x[i][j][k] = 1;
		}
	  }
	}
  }
  
  for(j=0; j<ny; j++){
	for(k=0; k<nx; k++){
	  printf("%d", x[nz/5][j][k]);
	}
	printf("\n");
  }
}
