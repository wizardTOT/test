#include <iostream>
void combine(int *arr,int start,int *result,int count,const int NUM,const int arrlen);
int main(){
	using namespace std;
	int n,i,j,count;
	cin >> n;
	int a[n],result[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	
	combine(a,1,result,count,3,n);		
		
	
} 
void combine(int *arr,int start,int *result,int count,const int NUM,const int arrlen)
{
	int i=0;
	for(i=start;i<arrlen+1-count;i++)
	{   
	result[count-1]=i;
		if(count-1==0){
			int j;
			for(j=NUM-1;j>=0;j--)
			printf("%d  ",arr[result[j]]);
			printf("/n");
			
		}else 
		combine(arr,i+1,result,count-1,NUM,arrlen);
	}
}
