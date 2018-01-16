#include<stdio.h>
int n,a[1000],j,k;
void print(){
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int partition(int low, int high){
    int pivot = a[high];
    int i = low - 1;
    for(int j = low; j <= high-1; j++){
        if(pivot >= a[j]){
            i++;
            swap(&a[i], &a[j]);
        }
        
    }
    swap(&a[i+1], &a[high]);
    return i + 1;
}

void quick_sort(int low, int high){
    if(low<high){
        int pivot = partition(low, high);
        quick_sort(low, pivot - 1);
        quick_sort(pivot + 1, high);
    }
}
void main(){
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    quick_sort(0,n-1);
    print();
}