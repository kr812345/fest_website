import java.util.Scanner;
class even{
    public static void main(String[] args){
        int n;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for (int i = 1; i <= n; i++){
            if (i%2 == 0){
                System.out.print(i + " ");
            }
        }
        input.close();
    }
}