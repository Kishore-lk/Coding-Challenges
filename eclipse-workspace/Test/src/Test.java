import java.util.*;
import java.io.*;
 class A 
{
	public void printValue(){
		System.out.println("A");
	}
}
 class B extends A 
{
	public void printValue()
	{
		System.out.println("B");
	}
}
 public class Test 
 {
	 public static void main(String... args) 
	 {
		 A b = new A();
		 newValue(b);
	 }
	 public static void newValue(A a){
		 // if(a instanceof A){
		  a.printValue();
		  //}
	 }
 }