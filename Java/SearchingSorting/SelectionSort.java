package SearchingSorting;

public class SelectionSort {
    public static void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }

    public static void selectionSort(int[] arr, int n){
        int i, j, index;
        for(i = 0; i < n; i++){
            index = i;
            for(j=i+1; j<n; j++){
                if(arr[j] < arr[index]){
                    index = j;
                }
            }
            if(index != i){
                swap(arr[index], arr[i]);
            }
        }
    }

    public static void print(int[] input){
        for (int j : input) {
            System.out.print(j + " ");
        }
        System.out.println();
    }

    public static void main(String[] args){
        int[] arr = {2, 1, 4, 3, 5};
        int n = arr.length;
        selectionSort(arr, n);
        print(arr);
    }
}
