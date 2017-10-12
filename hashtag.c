#include<stdio.h>
#include<math.h>
#define MAX_SIZE 20
int hash(int k){
	return k%MAX_SIZE;
}

int linear_probe(int h){
	return ++h%MAX_SIZE;
}

int quad_probe(int h,int i)
{
	return (h+pow(i,2))%MAX_SIZE;
}
 
int double_hash(int h,int i){
	return (h+i*linear_probe(h))%MAX_SIZE;
}
	
void display(int a[]){
	int i;
	printf("\nThe Elements of array are\n");
	for(i=0;i<MAX_SIZE;i++)
	printf("%d\t",a[i]);
}

int main(){
    int a[MAX_SIZE],i,ch,h,e,count;
	for(i=0;i<MAX_SIZE;i++)
	    a[i]=-1;
	    do{
		count=0;
		printf("\nenter the number to be stored:  ");
	    scanf("%d",&e);
		h=hash(e);
		if(a[h]==-1){
		    a[h]=e;
		    display(a);
		  }
		 else
		 {
		    while(count<MAX_SIZE){
				count++;
				printf("\nenter\n1.linear probe\t2.quadratic probe\t3.double hashing\n");
				printf("\nenter your choice for resolution:  ");
				scanf("%d",&choice);
				switch(choice)
				{
					case1:
					h=linear_probe(h);
					  break;
					case2:
					h=quadratic_probe(h,count);
					  break;
					 case3:
					 h=double_hash(h,count);
					    
					   break;
					  default:
					    printf("\ninvalid choice");
					    count--;
					    break;
					    
			}
			 if(a[h]==-1)
			 {
			    a[h]=e;
			    display(a);
			    break;
			   }
			}
		}
		if(count==MAX_SIZE)
		{
			printf("\nArray is Full or collosion Resolution not successful");
			return 0;
		}
	}while(1);
}

		
		
		
