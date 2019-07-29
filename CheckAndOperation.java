/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package snackdown;

import java.util.Scanner;

/**
 *
 * @author Krunal
 */
class p3 {
    public static void main(String[] args) {
        int test_cases,no,temp1,temp2,temp3,count;
        Scanner sc = new Scanner(System.in);
        test_cases = sc.nextInt();
        int[] A,B;
        
        for (int i = 0; i < test_cases; i++) {
            no = sc.nextInt();
            A = new int[no];
            B = new int[no];
            for (int j = 0; j < no; j++) {
                A[j] = sc.nextInt();
            }
            for (int j = 0; j < no; j++) {
                B[j] = sc.nextInt();
            }
            count=0;
             for (int k = 0; k <no; k++) {
                if (A[k]!=B[k]) {
                    count++;
                }
            }
             if(count==0){
              System.out.print("TAK\n");                  
             }else{
            for (int j = 0; j < no-2; j++) {
                temp1 = B[j];
                temp2 = B[j+1];
                temp3 = B[j+2];
                if ((A[j]+1<=temp1) && (A[j+1]+2<=temp2) && (A[j+2]+3<=temp3)) {
                    A[j]+=1;
                    A[j+1]+=2;
                     A[j+2]+=3;
                     
                }
            }
            count=0;
            for (int k = 0; k <no; k++) {
                if (A[k]!=B[k]) {
                    count++;
                }
            } 
            if (count==0) {
                    System.out.print("TAK\n");                  
                }else{
                    System.out.print("NIE\n");
                }
        }
      }
    }
}
