import java.io.*;


public class CountChar2 {
	public static void main(String [] args) {
		String str = "pweoijfpwjefnjdcowieidpwqoijdinjcnerifcwiedwendjoijOIVCTCDESEWSDRFGHUIJOKKM NESHUIJPOKhYESDRHUIJOKDwaesDYHUOIJPLnhVFDSEWSDRYIJpNJB";
		int table[] = new int[256];
		for ( int i = 0; i < str.length(); i ++) {
			table[str.charAt(i)]++;
		}
		int max = 0;
		for ( int i = 0; i < 256; i++ ) {
			if (table[i] > max) {
				max = table[i];
			}
		}
		
		for ( int i = 0; i < 256; i++ ) {
			if (table[i] == max) {
				System.out.println((char)i + " " + max);
			}
		}
	}
}
