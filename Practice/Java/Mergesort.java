import java.io.*;

public class MergeSort {
	public static int min(int a , int b) {
		return a > b ? b : a;
	}

	
	public static void sort(int [] array) {
		int [] brray = new int[array.length];
		int width;
		for (width = 1; width < array.length; width *= 2) {
			for (int i = 0; i < array.length; i += 2*width) {
				merge(array, i, min(i + width, array.length), min(i + 2*width, array.length), brray); 
			}
			int [] t = array;
			array = brray;
			brray = t;
		}
	}

	public static void merge(int [] array, int left, int right, int end, int [] brray) {	
		int i0 = left, i1 = right;
		for (int j = left; j < end; j++) {
			if (i0 < right && (i1 >= end || array[i0] <= array[i1])) {
				brray[j] = array[i0];
				i0++;
			} else {
				brray[j] = array[i1];
				i1++;	
			}
		}
	}

	public static void main() {
		int [] array = {12, 123, 234, 4534, 23,42, 21,3, 4,56 ,23,4, 34,5, 56,7 };
		sort(array);
		for (int i : array) {
			System.out.print(i + ",");
		}
	}
}
