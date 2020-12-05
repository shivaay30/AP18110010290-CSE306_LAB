#include<stdio.h> 
void main(){ 
int s=0,i=0; 
char c;
char ip[20]; 
printf("Enter input string : "); 
scanf("%s",ip); 
while((c=ip[i++])!='\0'){ 
switch(s) { 
case 0: if(c=='a') 
s=1; 
else if(c=='b') 
s=2; 
else { 
printf("Invalid token"); 
exit(0); } 
break; 
case 1: if(c=='a') 
s=0; 
else if(c=='b') 
s=3;
else { 
printf("Invalid token"); 
exit(0); }
break;
case 2: 
if(c=='a') s=3; 
else if(c=='b') 
s=0; 
else { 
printf("Invalid token"); 
exit(0); }
break; 
case 3: if(c=='a') s=2; 
else if(c=='b') 
s=1;
else { 
printf("Invalid token"); 
exit(0); }
break; }
} 
if(s==0) 
printf("\n\nString accepted\n\n");
else 
printf("\n\nString not accepted\n\n"); } 