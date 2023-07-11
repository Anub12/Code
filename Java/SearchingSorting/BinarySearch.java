package SearchingSorting;

public class BinarySearch {
    public static int binarySearch(int[] arr, int l, int r, int x){
//        if(r >= l){
//            int mid = l + (r-l) / 2;
//            if(arr[mid] == x)
//                return mid;
//            if(arr[mid] > x)
//                binarySearch(arr, l, mid-1, x);
//            return binarySearch(arr, mid+1, r, x);
//        }
//        return -1;

        int start = 0;
        int end = arr.length-1;
        int mid = start;
        while(start <= end){
            mid = start+(end-start)/2;
            if(arr[mid] < x){
                start=mid+1;
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }

    public static void main(String[] args){
        int[] arr = {2, 3, 4, 9, 13, 21};
        int x = 13;
        int n = 6;
        int result = binarySearch(arr, 0, n-1, x);
        System.out.println("The element is present at index: " + result);
    }
}

// Binary Search can be done by two ways, iterative and recursive both are mentioned above.