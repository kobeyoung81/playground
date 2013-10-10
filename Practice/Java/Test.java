import java.io.*;
public class Test {
	public static void main(String [] args ) {
		B b = new B();
	}
}

class A {
	static {
		System.out.println("Static A");
	}

	{
		System.out.println("A");
	}
	
	public A() {
		System.out.println("Construct A");
	}
}

class B extends A {
	static {
		System.out.println("Static B");
	}
	
	{
		System.out.println("B");
	}

	public B() {
		System.out.println("Construct B");
	}
}


