import java.util.*;

class Addition {
    public int No1;
    public int No2;

    public Addition(int A, int B) {
        No1 = A;
        No2 = B;
    }

    public int Display() {
        int iAns = 0;
        iAns = No1 + No2;
        return iAns;
    }
}

class program131 {
    public static void main(String arg[]) {
        int iValue1 = 0, iValue2 = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the first number:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the second number:");
        iValue2 = sobj.nextInt();

        Addition aobj = new Addition(iValue1, iValue2);

        iRet = aobj.Display();

        System.out.println("The Addition of two numbers is:" + iRet);

    }
}