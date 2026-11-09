//Approach 2
import java.util.Scanner;

class program34
{
    public int Addition( int iNo1,int iNo2)
    {
       int iAns=0;
       iAns=iNo1 + iNo2;
       return iAns;

    }


    public static void main(String A[])
    {
        Scanner scanner = null;
        int ivalue1 = 0, ivalue2 = 0, iresult = 0;

        scanner =new Scanner(System.in);
        System.out.println("Enter First Number:");
        ivalue1=scanner.nextInt();

        System.out.println("Enter Second Number:");
        ivalue2=scanner.nextInt();

        iresult=Addition(ivalue1,ivalue2);      //Error
        System.out.println("Addition is :"+iresult);


    }
}