#include<stdio.h>
int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int n=3,mx,mx1;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i] > a[j]) 
                {
                    mx =  a[i];
                    a[i] = a[j];
                    a[j] = mx;
 
                }
            }
        }

        // for(int i=0;i<n;i++){
        //     printf("%d",a[i]);
        // }

        int ans=a[1]+a[2];

        for (int i = 0; i < n; ++i) 
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (b[i] > b[j]) 
                {
                    mx1 =  b[i];
                    b[i] = b[j];
                    b[j] = mx1;
 
                }
            }
        }

        int ans1=b[1]+b[2];

        //printf("%d %d",ans,ans1);

        if(ans>ans1){
            printf("Alice\n");
        }
        else if(ans==ans1){
            printf("Tie\n");
        }
        else{
            printf("Bob\n");
        }
    }
    return 0;
}
