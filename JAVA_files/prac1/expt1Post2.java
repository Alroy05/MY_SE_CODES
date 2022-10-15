import java.util.*;

class expt1Post2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string");
        String str = sc.nextLine();
        char ch[] = str.toCharArray();

        int alphabet=0,digit =0, space=0,special=0; 
        
        for(int i = 0; i < str.length();i++)
        {
        if(Character.isLetter(ch[i]))
        {
          alphabet++;
        }
        else if(Character.isDigit(ch[i])){
            digit++;
        }
        else if(Character.isSpaceChar(ch[i])){
            space++;
        }
        else{
            special++;
        }
    }

    System.out.println("Alphabets in the string are "+alphabet);
    System.out.println("Digits in the string are "+digit);
    System.out.println("Spaces in the string are "+space);
    System.out.println("Special characters in the string are "+special);




    }
}