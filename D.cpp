#include <stdio.h>

int main(){
	int t,a,b;
	long long int y=0;
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d %d", &a, &b);
		long long int x[a][b];
		long long int max[a];
		for(int j=0; j<a; j++){
			max[j]=0;
			for(int k=0; k<b; k++){
				scanf("%lld", &x[j][k]);
				if(x[j][k] > max[j]){
					max[j]=x[j][k];
				}
			}
		}
		for(int l=0; l<a; l++){
			y = y+max[l]; 
		}
		printf("Case #%d: %lld\n", i,y);
		y=0;
	}
		
	return 0;
}

