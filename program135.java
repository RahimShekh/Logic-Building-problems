import java.util.*;

class program135 {
    public static void Display(int iNo) {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            System.out.println(iCnt);
        }
    }

    public static void main(String arg[]) {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("enter the number:");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}