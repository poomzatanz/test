#include <iostream>
using namespace std;

void preBmbc(char *x,int m,int bmBc[]){
	int i;
	for(i=0;i<255;++i)
		bmBc[i] = -1;
	for(i=0;i<m;++i){
		bmBc[x[i]] = i;
		printf("bmBc[%d] =%d\n",x[i],bmBc[x[i]]);
	}

}

void main ()
{
  int bmBc[256];
	preBmbc("text",4,bmBc);
	printf("%d\n",'e');
	system("pause");
}
