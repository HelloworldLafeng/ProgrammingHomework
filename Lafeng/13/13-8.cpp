#include <stdio.h>
#include <stdlib.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int **two=(int**)malloc(sizeof(int*)*n);
	for (int _=0;_<n;_++){
		two[_]=(int*)malloc(sizeof(int)*m);
	}
	for (int i=0;i<n;i++){
		for (int p=0;p<m;p++){
			scanf("%d",&two[i][p]);
		}
	}
	for (int i=0;i<n;i++){
		for (int p=0;p<m-1;p++){
			printf("%d ",-two[i][p]*10);
		}
		printf("%d\n",-two[i][m-1]*10);
	}
	for (int z=0;z<n;z++) free(two[z]);
	free(two);
	return 0;
}
