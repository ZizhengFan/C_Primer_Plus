/*
 * 希腊哲学家 Zeno 曾经提出箭永远不会达到它的目标。
 * 首先，他认为箭要到达目标距离的一半，然后再达到剩余距离的一半，
 * 然后继续到达剩余距离的一半，这样就无穷无尽。
 * Zeno认为箭的飞行过程有无数个部分，所以要花费无数时间才能结束这一过程。
 */

#include <stdio.h>

int main(){
    int t_ct;
    double time, power_of_2;
    int limit = 20;
    
    for(time=0, power_of_2=1, t_ct=1; t_ct<=limit; t_ct++, power_of_2*=2.0){
        time += 1.0 / power_of_2;
        printf("time = %lf when terms = %d.\n", time, t_ct);
    }
    
    return 0;
}
