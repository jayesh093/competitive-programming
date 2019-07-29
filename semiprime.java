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
class semiprime{
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
    void prime(int no){
        int mul,count=0;
        if(no%2==0){
            for (int i = 0; i < arr.length; i++) {
                for (int j = i+1; j < arr.length; j++) {
                    mul = arr[i]*arr[j];
                    if(mul==no/2){
                        count++;
                    }
                }
            }
        }else{
            int temp;
            for (int i = 0; i < arr.length; i++) {
                for (int j = i+1; j < arr.length; j++) {
                    mul=arr[i]*arr[j];
                    if((mul%5==0) && (no>mul)){
                        temp=no-mul;
                           for (int k = 0; k < arr.length; k++) {
                               for (int l = k+1; l < arr.length; l++) {
                                   if(arr[k]*arr[l]==temp){
                                       count++;
                                   }
                               }
                        }
                    }
                }    
            }        
        }
        if(count!=0){
            System.out.println("YES\n");
        }else{
            System.out.println("NO\n");
        }
    } 
    public static void main(String[] args) {
        int test_cases;
        semiprime sm = new semiprime();
        Scanner sc = new Scanner(System.in);
        int no;
        test_cases = sc.nextInt();
        for (int i = 0; i < test_cases; i++) {
            no = sc.nextInt();
            sm.prime(no);
        }
    }
} 
