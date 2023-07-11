package Arrays;
import java.util.Scanner;

public class ArrayUse {
    public static int largestInArray(int[] input){
        int max = Integer.MIN_VALUE;
        for (int j : input) {
            if (j > max) {
                max = j;
            }
        }
        return max;
    }

    public static int[] takeInput(){
        Scanner s = new Scanner(System.in);
        int size = s.nextInt();
        int[] input = new int[size];
        for(int i = 0; i < size; i++){
            input[i] = s.nextInt();
        }
        s.close();
        return input;
    }

    public static void print(int[] input){
        for (int j : input) {
            System.out.print(j + " ");
        }
        System.out.println();
    }

    public static void incrementArray(int[] input){
        input = new int[5];
        for(int i = 0; i < input.length; i++){
            input[i]++;
        }
    }

    public static void main(String [] args){
        int [] arr = takeInput();
        print(arr);
        int largest = largestInArray(arr);
        System.out.println("Largest " + largest);
//        int[] arr = {1,2,3,4,5};
//        incrementArray(arr);
//        print(arr);
    }
}
