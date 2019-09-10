/*
Write a program that reads an input n from stdin. n tells us the number of rows to be printed. Print the pattern as per the given examples.

Input format: The first line contains the number of inputs. The lines after that contain a different values for n

Note: You have to write the entire program and not just the single method! Make sure your class name is Main

Example Input:
2
3
5

Output:
A
BB
CCC
A
BB
CCC
DDDD
EEEEE
*/

import java.util.*;
public class Main
{
public static void main(String args[])
{
 int i,j,num,n,k;
 int p[]=new int[10];
 char a='A';
 boolean vac;
 Scanner s=new Scanner(System.in);
 n=s.nextInt();
 for(i=0;i<n;i++)
 p[i]=s.nextInt();
 for(k=0;k<n;k++){
 a='A';
 for(i=0;i<p[k];i++){
 for(j=0;j<p[k];j++){
 if(i>=j)
 System.out.print(a);
 }
 System.out.println();
 a++;
 }
 }
 }
 }
 
   
   
