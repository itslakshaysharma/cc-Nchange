#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t>0){
	int n,p,x=0,l=0,y=0,z=0;
	scanf("%d",&n);
	scanf("%d",&p);
	int a[n],b[n];
	for(int i=0;i<n;i++){
	    b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
	    if(p%a[i]!=0)
	    {
	        x++;
	        break;
	    }
	   
	}
	if(x==0)
	{
	    printf("NO\n");
	}
	else
	
	   
	    {
	        for(int i=n-1;i>=0;i--)
	       { 
	           if(p==0){
	           break;
	              }
	           else if(a[i]>p&&i==0){
	                  b[i]=1;
	              }
	          else if(a[i]>p)
	           { // printf("c1\n");
	               y=a[i]-p;
	               for(int j=0;j<i;j++)
	               {  
	                  if(a[j]>p)
	                   {
	                   b[j]=1;
	                   p=0;
	                   break;
	                   }
	                  else 
	                  { 
	                      x= p/a[j];
	                   z=a[j]*(x+1)-p;
	                   if(z>=y)
	                   {
	                        l++;
	                        
	                   }
	                   
	           }
	               }
	           if(l!=0){
	                b[i]=1;
	                for(int j=i-1;j>=0;j--)
	                {
	                    b[j]=0;
	                }
	                
	               p=0;
	               
	           }
	           else
	           {
	              b[i]=0;
	              
	           }
	       }
	       else if(p%a[i]==0){
	          // printf("c2\n");
	           x=p/a[i];
	           p = p-(a[i]*(x-1));
	           b[i]=x-1;
	          // printf("%d\n%d hahah",p,x);
	       }
	       else if(a[i]<p&&p%a[i]>1){
	          // printf("c3\n");
	           x=p/a[i];
	           p=p-a[i]*x;
	           b[i]=x;
	           {
	               if(i==0&&p>0){
	                   b[i]+=1;
	                   p=0;
	               }
	           }
	           
	       }
	       
	       
	    }
	    printf("YES ");
	    for(int j=0;j<n;j++)
	    {
	        printf("%d ",b[j]);
	    }
	    printf("\n");
	}
	t=t-1;
    }
	
	return 0;
}

