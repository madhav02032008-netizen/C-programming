#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    printf("Enter size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");//yty97898799i978787878787878787
    for(int i=0; i<n;++i){
        scanf("%d",&arr[i]);
    }

    int g,sg;
    g=INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>g){
            sg=g;
            g=arr[i];
        }
    }
    printf("greatest:%d",g);
    printf("second greatest: %d",sg);

}