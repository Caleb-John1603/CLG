package JAVA;


import java.util.Scanner;

class Write_a_Java_Program_to_Add_Two_Integers {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter 1st no: ");
        int a = sc.nextInt();
        System.out.print("enter 2nd no: ");
        int b = sc.nextInt();
        System.out.println(a+b + " is the sum");
    }
}