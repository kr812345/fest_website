import java.util.Scanner;

class OTP {
    public static void main(String[] args){
        int otp0 = 1983;
        Scanner myObj = new Scanner(System.in);
        int opt = myObj.nextInt();
        if (otp0 == opt)
        {
            System.out.println("Your entered otp (" + otp0 + ")  is correct.");
            System.out.println(" ~`Verification Completed!`~ ");
        } else {
            System.out.println(" Incorrect OTP!");
        }
        myObj.close();
    }
}
