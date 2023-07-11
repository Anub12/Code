package Arrays2D;

public class SineWave {
//	public static void printSineWave(int[][] arr) {
//		int k = 0;
//		int rows = arr.length;
//		int cols = arr[0].length;
//		while(k < cols) {
//			for(int i = 0; i < 3; i++) {
//				System.out.print(arr[i][k] + " ");
//			}
//			k++;
//		}
//	} // my solution
	
	public static void wavePrint(int mat[][]) {
		int nRows = mat.length;
		if(nRows == 0) {
			return;
		}
		int mCols = mat[0].length;
		for(int j = 0; j < mCols; j++) {
			if(j%2 == 0) {
				for(int i = 0; i < nRows; i++) {
					System.out.print(mat[i][j] + " ");
				}
			}
			else {
				for(int i = nRows-1; i >= 0; i--) {
					System.out.print(mat[i][j] + " ");
				}
			}
		}
	}

	public static void main(String[] args) {
		// int[][] arr = new int[4][5];
//		arr[0][0] = 1;
//		arr[0][1] = 2;
//		arr[0][2] = 3;
//		arr[0][3] = 4;
//		arr[1][0] = 5;
//		arr[1][1] = 6;
//		arr[1][2] = 7;
//		arr[1][3] = 8;
//		arr[2][0] = 9;
//		arr[2][1] = 10;
//		arr[2][2] = 11;
//		arr[2][3] = 12;
//		printSineWave(arr);
		int input[][] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
		wavePrint(input);
	}

}
