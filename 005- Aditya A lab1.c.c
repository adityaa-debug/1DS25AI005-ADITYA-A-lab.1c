#include <stdio.h>
void traversal(){
    int arr[5]={2,3,4,6,9};
    for (int i=0;i<5;i++){
      printf( "%d ",arr[i]);  
    }
    
}

void linear_search(){
    int arr[5]={3,5,6,8,9};
    int key=8;
    for (int i=0;i<5;i++)
    {
        if(key==arr[i])
        printf("\nelement found at index %d",i);
    }
}
void findmin(){
    int arr[5]={1,2,3,4,0};
    int min;
    min=arr[0];
    for (int i=0;i<5;i++){
        if (min>arr[i])
        min=arr[i];
    }
    printf("\nmin element is %d\n",min);
}

void findmax(){
    int arr[5]={4,6,7,8,9};
    int max;
    max=arr[0];
    for(int i=0;i<5;i++){
        if (max<arr[i])
        max=arr[i];
    }
    printf("max element is %d",max);
}
void inseartion(){
    int arr[5]={2,6,8,7,0};
    int last=3;
    int pos=2;
    int ins_value=99;
    
    for(int i=last;i>=pos;i--)
    {
      arr[i+1]=arr[i] ;  
    }
    arr[pos]=ins_value;
    last--;
        printf("\nelements after inseartion are:\n");
        for(int i=0;i<5;i++)
        {
            printf("%d ",arr[i]);
        }
    
}
void deletion(){
    int arr[5]={2,6,7,9,8};
    int last=4;
    int pos=2;
    printf("\ndeletion at given index %d \n",pos);
    for (int i=pos;i<=last;i++)
    {
        arr[i]=arr[i+1];
    }
    last--;
    
    printf("array after deletion");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}
void sum(){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for (int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        
    }
    printf("\nsum of array elements are %d\n",sum);
}



int main() {
	// your code goes here
traversal();
linear_search();
findmin();
findmax();
inseartion();
deletion();
sum();
}

