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
 class SpreadWord {
     public static void main(String[] arg){
     Scanner sc=new Scanner(System.in);
     int test_cases,no,day,node,value;
             int[] A;
     test_cases=sc.nextInt();
         for (int i = 0; i < test_cases; i++) {
             no=sc.nextInt();
             A=new int[no];
             for (int l1 = 0; l1 < no; l1++) {
                 A[l1]=sc.nextInt();
             }
             node=no;
             day=0;
             node=node-1;
             value=A[0];
             if(value>no){value=no;}
             int j=1,Count,sum;
             boolean b= true;
             while(b){
                 sum=0;
                 Count=0;
                 for (; j <= value && j<no; j++) {
                     Count++;
                 }
                 for (int l2 = 0; l2 <= value && l2<no; l2++) {
                     sum+=A[l2];
                 }
                  value=sum+j-1;
                 day++;

                 node-=Count;
                 if(node<=0){
                    b=false; 
                 }
             }
             System.out.println(day);
         }
     }
    
}
