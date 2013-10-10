import java.util.*;
import java.io.*;


public class CountChar {
	public static void main(String [] args) {
		HashMap<String, Integer> table = new HashMap<String, Integer>();
		String str = "aabbsjjueoiwjefiwjfxcsdwuehfrewfjcsoicwsnbefiweOIJOHUHNB WVCRFQRCOIJWICWDooscunhwoef";
		for (int i = 0; i < str.length(); i++) {
			String t = String.valueOf(str.charAt(i));
			if (table.containsKey(t)) {
				Integer v = table.get(t);
				v = Integer.valueOf(v.intValue() + 1);
				table.put(t, v);
			} else {
				Integer v = Integer.valueOf(1);
				table.put(t, v);
			}
		}
		
		Set<Map.Entry<String, Integer>> entries = table.entrySet();
		int max = 0;
		for (Map.Entry<String, Integer> e : entries) {
			int c = e.getValue().intValue();
			if (c > max) {
				max = c;
			}
		}

		for (Map.Entry<String, Integer> e : entries) {
			int c = e.getValue().intValue();
			if ( c == max) {
				System.out.println(e.getKey() + "  " + c);
			}
		}
	}
}
