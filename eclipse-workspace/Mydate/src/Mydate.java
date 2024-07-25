
public class Mydate {
	private int month,date,year;
	public Mydate()
	{
		this(9,9,2001);
		date=10;
	}
	public Mydate(int date,int month,int year)
	{
		this.date=date;
		this.month=month;
		this.year=year;
	}
	private void showdate() {
		System.out.println("Date is "+date+" Month is "+month+" year is "+year);
	}
	public static void main(String[] arr)
	{
		Mydate m=new Mydate(8,8,2000);
		
		m.showdate();
		Mydate m1=new Mydate();
		m1.showdate();
		
	}
}
