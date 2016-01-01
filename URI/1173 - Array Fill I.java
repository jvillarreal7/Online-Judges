//Intended to use this problem to teach basic array use. Only to realize later I never used the dang array LOL. ¯\_(ツ)_/¯
//Also first ever Java submission to this repo.

import java.util.*;
import java.lang.*;
import java.io.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int[] a = new int[10];
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i = 0; i < 10; i++)
		{
			if(i == 0)
			{
				System.out.println("N["+i+"] = "+n);
			}
			else
			{
				n*=2;
				System.out.println("N["+i+"] = "+n);
			}
		}
	}
}