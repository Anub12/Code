package Arrays;

public class reverseArray {
    public static void rverseArray(int[] arr, int start, int end){
        int temp;

        while(start < end){
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    public static void printArray(int[] arr, int size){
        for (int i = 0; i < size; i++)
            System.out.print(arr[i] + " ");

        System.out.println();
    }

    public static void main(String[] args){
        int[] arr = {1,2,3,4,5};
        int start = 0;
        int size = 5;
        rverseArray(arr, start, size-1);
        printArray(arr, size);
    }
}
