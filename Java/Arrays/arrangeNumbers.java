package Arrays;

public class arrangeNumbers {
    public static void arrange(int[] arr, int n){
        int left = 0;
        int right = n-1;
        int counter = 1;

        while(left <= right){
            if(counter % 2 == 1){
                arr[left] = counter;
                counter += 1;
                left++;
            }
            else{
                arr[right] = counter;
                counter += 1;
                right--;
            }
        }
    }

    public static void print(int[] input){
        // int size = input.length;
        for (int j : input) {
            System.out.print(j + " ");
        }
        System.out.println();
    }

    public static void main(String[] args){
        int[] arr = {1, 2, 3, 4, 5 ,6};
        int n = arr.length;
        arrange(arr, n);
        print(arr);
    }
}
