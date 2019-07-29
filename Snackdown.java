/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package snackdown;

import java.util.Arrays;
import java.util.Collections;
import static java.util.Collections.reverseOrder;
import java.util.Scanner;

/**
 *
 * @author Krunal
 */
public class Snackdown {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int test_cases;
        int n,k;
        int check;
        int count;
        Integer[] arr;
        Scanner sc = new Scanner(System.in);
        test_cases = sc.nextInt();
        for (int i = 0; i < test_cases; i++) {
            n = sc.nextInt();
            k = sc.nextInt();
            arr = new Integer[n];
            for (int j = 0; j < n; j++) {
                arr[j] = sc.nextInt();
            }
            Arrays.sort(arr,Collections.reverseOrder());
            check=arr[k-1];
            count = 0;
            for (int l = 0; l < n; l++) {
                if(arr[l]>=check){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
    
}
