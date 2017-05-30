void bubblesort(int a[], int n){
   int i=0,j,k;
   for (i;i<n-1; i++){         
       for (j=0;j<n-i-1;j++){ 
           if (a[j]>a[j+1]){
              k=a[j];
              a[j]=a[j+1];
              a[j+1]=k;
           }
       }
   }
}
