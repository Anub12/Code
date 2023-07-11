package Arrays;

public class UniqueElement {
    public static int uniqueEle(int[] arr){
        for(int i = 0; i < arr.length; i++){
            int j;
            for(j = 0; j < arr.length; j++){
                if(i != j){
                    if(arr[i] == arr[j]){
                        break;
                    }
                }
            }
            if(j == arr.length){
                return arr[i];
            }
        }
        return Integer.MAX_VALUE;
    }

    public static void main(String[] args){
        int[] arr = {2, 3, 1, 6, 3, 6, 2};
        int z = uniqueEle(arr);
        System.out.println("The Unique Element is: " + z);
    }
}
