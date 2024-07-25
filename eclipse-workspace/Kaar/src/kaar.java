import java.awt.List;

public class kaar {
	
	public static void main(String ar[]) {
		{
			TestThread t = new TestThread();
			t.setValue(5);
			t.start();
			t.setValue(10);
		}
		class TestThread extends Thread
		{
			private int value;
			synchronized public void setValue(int v)
			{
				value = v;

			}
			public void run()
			{
				System.out.println("before: "+value);
				setValue(50);
				System.out.println("after:"+value);
			}
		}

}
