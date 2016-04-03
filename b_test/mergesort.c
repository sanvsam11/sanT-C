#include<stdio.h>
int a[]={2,3,8,7,6,5,4,8,3};
void merge(int l,int x,int y,int r){
 for(int i=y;i<=r;i++){
  for(int j=i-1,k=i;j>=l;j--,k--){
   if(a[k]<a[j]){
   a[k]=a[k]^a[j];
   a[j]=a[k]^a[j];
   a[k]=a[k]^a[j];
}
}
}
}
void merge_sort(int l,int r){
 int s=-l+r+1;
if(l==r){} 
else if((l+1)==r)
  {if(a[l]>a[r]){
  a[l]=a[l]^a[r];
  a[r]=a[l]^a[r];
  a[l]=a[l]^a[r];
}}
else if((s%2)==0){
merge_sort(l,l+(s/2)-1);
merge_sort(l+(s/2),r); 
if(a[l+(s/2)-1]>a[l+(s/2)]) merge(l,l+(s/2)-1,l+(s/2),r);
}
else if((s%2)!=0){
merge_sort(l,l+(s/2));
merge_sort(l+(s/2)+1,r);
if(a[l+(s/2)]>a[l+(s/2)+1]) merge(l,l+(s/2),l+(s/2)+1,r);
}
}
int main(){
 merge_sort(0,8);
 for(int i=0;i<(sizeof(a)/sizeof(int));i++) printf("%d ",a[i]);
return 0;}
