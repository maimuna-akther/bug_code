  #include<stdio.h>
  #include<stdlib.h>
  
      int sum(int n)
{
      int s=0;
      for(unsigned int i=1; i<=n;++i)
  
      s+=i;
     return s;
}
    int main(int argc,char *argv[])
{
    	if (argc<2)
{
    fprintf(stderr,"usage: ./bug [NUMBER]\n");
    return -1;
}
 
    int n = atoi(argv[1]);
 
   //convert the string to integer = atoi
   //argv[1]="20"=20
   //stdout=standard output
 
   printf("sum:%d\n",sum(n));
   return 0;  
}
 

