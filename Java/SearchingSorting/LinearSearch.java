package SearchingSorting;

public class LinearSearch {
    public static int linearSearch(int[] arr, int val){
        for(int i = 0; i < arr.length; i++){
            if(arr[i] == val){
                return i;
            }
        }
        return -1;
    }

    public static void main(String [] args){
        int[] arr = {1, 2, 4, 7, 9, 10, 11};
        int val = 11;
        int output = linearSearch(arr, val);
        System.out.println("The Output is: " + output);
    }
}
