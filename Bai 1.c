#include<stdio.h>

#include<string.h>

int main()

{

int a[100],i,n;

char c[100];

scanf("%s",c);//Lay dau vao duoi dang chuoi

n=strlen(c);

for(i=0;i<n;i++)

{

a[i]=(int)c[i];//chuyen phan tu cua chuoi thanh so 

a[i]=a[i]-48;

printf("%d\n",a[i]);

}

return 0;

}
