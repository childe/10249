#include <sys/time.h>
#include <stdio.h>

const int n =  512 * 1024 * 1024;
int arr[n];

void t(int step){
    struct timeval tv;
    gettimeofday(&tv,NULL);
    int s = tv.tv_sec;
    int su = tv.tv_usec;
    for (int i = 0; i < n; i+=step) {
        arr[0]+=1;
        arr[0]+=1;
    }
    gettimeofday(&tv,NULL);
    int e = tv.tv_sec;
    int eu = tv.tv_usec;
    printf("%.4f\n", (e-s)+(eu-su)/1000000.0);

    gettimeofday(&tv,NULL);
    s = tv.tv_sec;
    su = tv.tv_usec;
    for (int i = 0; i < n; i+=step) {
        arr[0]+=1;
        arr[1]+=1;
    }
    gettimeofday(&tv,NULL);
    e = tv.tv_sec;
    eu = tv.tv_usec;
    printf("%.4f\n", (e-s)+(eu-su)/1000000.0);
}

int main(){
    t(1);
    t(1);
}
