#include <stdio.h>
void main(){
      int i;
      float cj[5],num_1=0,num_2;
      for(i=0;i<5;i++){
            printf("请输入第%d位同学的成绩：\n",i+1);
            scanf("%f",cj[i]);
            
            num_1+=cj[i];           //累加
      }
      printf("111111111");
      num_2=num_1/5;                //计算平均值
      for(i=0;i<=4;i++){
            printf("\n第%d位同学的成绩为%f，他与平均成绩相差%f",i+1,cj[i],cj[i]-num_2);          
      }
}
