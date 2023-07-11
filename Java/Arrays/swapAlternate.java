package Arrays;

public class swapAlternate {

    public static void swpAlt(int[] arr){
        for(int i = 0; i < (arr.length - 1); i += 2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    public static void print(int[] input){
        for (int j : input) {
            System.out.print(j + " ");
        }
        System.out.println();
    }

    public static void main(String [] args){
        int[] arr = {1,2,3,4,5};
        swpAlt(arr);
        print(arr);
    }
}
