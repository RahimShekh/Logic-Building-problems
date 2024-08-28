import java.util.*;

public class program130 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;
        int iRet = 0;

        System.out.println("Enter the First number:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the second number:");
        iValue2 = sobj.nextInt();

        iRet = iValue1 + iValue2;

        System.out.println("The Addition is:" + iRet);
    }
}
