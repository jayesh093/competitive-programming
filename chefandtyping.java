/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package snackdown;
import java.util.HashMap;
import java.util.Scanner;
/**
 *
 * @author Krunal
 */
public class chefandtyping {
    public static void main(String[] args) {
        int test_cases;
        Scanner sc = new Scanner(System.in);
        test_cases = sc.nextInt();
        char[][] a;
        double finaltime=0;
        double time;
        int strsize;
        HashMap<String,String> hmp = new HashMap<String,String>();
        hmp.put("j","left");
        hmp.put("k","left");
        hmp.put("j","right");
        hmp.put("j","right");
        
        for (int i = 0; i < test_cases; i++) {
            time = 0.2;
            strsize = sc.nextInt();
            a = new char[strsize][20];
            for (int j = 0; j < strsize; j++) {
                    a[j] = sc.next().toCharArray();
            
            }
            String t;
            int count = 0;
            for (int j = 0; j < strsize; j++) {
             
			 StringBuffer temp = new StringBuffer();
                for(int z = 0; z <a[j].length; z++) {
                    temp = temp.append(puzzle[j][z]);
                }

                for (int k = j-1; k >= 0; k--) {
				
				StringBuffer temp1 = new StringBuffer();
                for(int z = 0; z <a[k].length; z++) {
                    temp1 = temp.append(puzzle[k][z]);
                }
                    if(temp.equals(temp1)){
                        count++;
                    }
                }
				System.out.println("count:"+count);
				/*
                for (int k = 1; k < a[j].length; k++) {
                    
                    if (hmp.get(a[j][k]) == hmp.get(a[j][k-1])) {
                        time+=0.4;
                    }else{
                        time+=0.2;
                    }
                }
                if(count==1){
                    time = time/2;
                }
            }
            finaltime = finaltime+time;
        }
        System.out.println(finaltime*10);
    */
    }
}
}