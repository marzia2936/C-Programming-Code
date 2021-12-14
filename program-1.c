#include<stdio.h>
int main(){
int x,y,z;
float k;
printf("Enter Value:");
scanf("%d%d%d",&x,&y,&z);
scanf("%f",&k);
if(y<0){
    z=-y;
}
else{
    z=y;
}
k=1;
while (z!=0){
    k=k*x;
    z=z-1;
}
while(k!=0){
  z=z+1;
}
if(y<0){
    k=1/k;
}
printf("Value=%d",k);


}
