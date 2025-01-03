#include <stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%lld",&n);
	int b[100000];
	int dem=0;
	while(n!=0){
		int a=n%10;
		n/=10;
		b[dem]=a;
		dem++;
	}
	for(int i=0;i<dem;i++){
		int l=0,r=dem-1;
		while(l!=r){
			int x=b[l];
			b[l]=b[r];
			b[r]=x;
			r--;
			l++;
		}
	}
	 for (int i = 0; i < dem; i++) {
        printf("%d", b[i]);
        
        if ((i + 1) % 3 == 0 && i != dem - 1) {
            printf(",");
        }
    }
    
    return 0;
}
