package SearchingSorting;

public class mergeSort {
	public static void merge(int[] array, int left, int mid, int right) {
		int[] temp = new int[right+1];
		int i = left;
		int j = mid+1;
		int k = 0;
		while(i <= mid && j <= right) {
			if(array[i] <= array[j]) {
				temp[k++] = array[i++];
			}
			else {
				temp[k++] = array[j++];
			}
		}
		while(i <= mid) {
			temp[k++] = array[i++];
		}
		while(j <= right) {
			temp[k++] = array[j++];
		}
		k--;
		while(k >= 0) {
			array[k+left] = temp[k];
			k--;
		}
	}
	
	public static void MergeSort(int[] array, int left, int right) {
		int mid;
		if(left < right) {
			mid = (left + right) / 2;
			MergeSort(array, left, mid);
			MergeSort(array, mid+1, right);
			merge(array, left, mid, right);
		}
	}
	
	public static void printArray(int[] arr) {
		for(int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println();
	}
	
	public static void main(String[] args) {
		int[] nums = {95,45,48,98,485,65,478,1,2325};
		int n = nums.length;
		System.out.print("Array before sorting: ");
		printArray(nums);
		MergeSort(nums, 0, n-1);
		System.out.print("Array after sorting: ");
		printArray(nums);
	}
}
