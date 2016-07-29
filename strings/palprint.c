// c program to print all possible palindromes using a given string
#include<stdio.h>
#include<stdlib.h>

struct sc{
 int cc[26];
 int count;
};
//typedef struct string_characters sc;
struct sc *store;
//=(struct sc*) malloc(sizeof(struct sc));
int palindromicCount(char* p,int l){
 printf("store elements access:%d",store->cc[0]);
return 0;
}
int palindromeCheck(char* p){int flag_two_odd=0;
 store = (struct sc*)malloc(sizeof(struct sc));
 for(int i=0;i<26;i++)store->cc[i]=0;
 while(*p!='\n'){
  store->cc[*p -'a']++;
p++;}
 for(int i=0;i<26;i++) if(store->cc[i]%2==1)if(flag_two_odd==0)flag_two_odd=1; else return 0;
 return 1;
}
int main(){
 char a[30], *p=a;
 int l=0,output=0;
 printf("Enter the string and length to print possible palindromes:");
 fgets(a,30,stdin);scanf("%d",&l);
 printf("Entered string is:%s",p);
 if(palindromeCheck(a)!=0) { printf("\n Its a damn palindrome. Moron.\n");
output=palindromicCount(p,l);}
 printf("\nCount of palindromes:%d\n",output); 
return 0;
}
