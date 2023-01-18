public:
    void quickSort(int arr[]) {
       if (arr == null || arr.size() < 2 ) {
       return;
       }
       process(arr, 0, arr.size() - 1);
    }
    void process(int arr[], int l, int r) {
     int m = partition1(arr, l ,r);
     process(arr, l, m - 1);
     process(arr, m + 1, r);
    }
    void int partition1(int arr[], int l, int r) {
     if(l == r)
     return l;
     int lessEqual = l - 1;
     int index = l;
     while(index < r) {
      if(arr[index] < arr[r]) {
       swap(arr, index, ++lessEqual);
      }
      index++;
     }
     swap(arr,r,++lessEqual);
     return lessEqual;
    }
    void swap(int[] arr, int index1, int index2) {
        if (index1 != index2) {
            arr[index1] = arr[index1] ^ arr[index2];
            arr[index2] = arr[index1] ^ arr[index2];
            arr[index1] = arr[index1] ^ arr[index2];
        }
};
```
