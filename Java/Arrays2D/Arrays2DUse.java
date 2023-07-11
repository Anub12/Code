package Arrays2D;
import java.util.Scanner;

public class Arrays2DUse {
	public static int[][] takeInput() {
		Scanner sc = new Scanner(System.in);
		int rows;
		System.out.println("Enter number of rows: ");
		rows = sc.nextInt();
		int cols;
		System.out.println("Enter number of cols: ");
		cols = sc.nextInt();
		int input[][] = new int[rows][cols];
		for(int i = 0; i < rows; i++) {
			for(int j = 0; j < cols; j++) {
				System.out.println("arr[" + i + "][" + j + "]: ");
				input[i][j] = sc.nextInt();
			}
		}
		sc.close();
		return input;
	}
	
	public static void print(int[][] arr) {
		int rows = arr.length;
		int cols = arr[0].length;
		for(int i = 0; i < rows; i++) {
			for(int j = 0; j < cols; j++) {
				System.out.print(arr[i][j] + " ");
			}
			System.out.println();
		}
	}
	
	public static void main(String[] args) {
		int[][] arr = new int[4][5];
		// 					  |	 |
		// 					  |  |
		//        rows   <-----   -----> columns
		
		System.out.println("arr[0][2]: " + arr[0][2]);
//		arr[3][4] = 14;
		System.out.println("arr[3][4]: " + arr[3][4]);
		
//		int arr2[][] = {{1,2,3},{4,5,6}};
//		for(int i = 0; i < arr2.length; i++) {
//			for(int j = 0; j < arr2[0].length; i++) {
//				System.out.println("arr[" + i + "][" + j + "]: " + arr2[i][j]);
//			}
//		}
		
		arr = takeInput();
		print(arr);
		
		int[][] arr2 = new int[4][];
		System.out.println(arr2);
		for(int i = 0; i < arr2.length; i++) {
			arr2[i] = new int[i+2];
		}
		
		for(int i = 0; i < arr2.length; i++) {
			for(int j = 0; j < arr2[i].length; j++) {
				System.out.print(arr2[i][j] + " ");
			}
			System.out.println();
		}
		
	}

}
