import java.util.*;

public class program134 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iCnt = 0;
        int iSum = 0;

        System.out.println("Enter the numnber:");
        iValue = sobj.nextInt();

        for (iCnt = 1; iCnt < iValue; iCnt++) {
            if (iValue % iCnt == 0) {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("The sum of factors is:" + iSum);
    }
}
