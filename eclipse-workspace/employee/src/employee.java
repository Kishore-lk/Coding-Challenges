

class employee extends base
{
	float p,d;
	employee(float pa,float da)
	{
		super(111,"abcd",2000);
		p=pa;
		d=da;
	}
	void print()
	{
		System.out.println("Employee Details:");
		System.out.print("emp id:"+eid+" "+"emp name:"+ename+" "+"Salary:"+" "+salary+" "+"pf:"+p+" "+"da:"+d);
	}

public static void main(String arg[]){
	employee e=new employee(1000,2000);
	e.print();
}
	
}