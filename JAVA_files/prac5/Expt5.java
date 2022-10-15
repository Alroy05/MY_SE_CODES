import java.util.*;

class Publication
{
    String title;
    Double price;

    Publication()
    {
    }

    Publication(String title,Double price)
    {
        this.title=title;
        this.price=price;
    }

    void getData()
    {   
        Scanner sc= new Scanner(System.in);
        title=sc.nextLine();
        price=sc.nextDouble();
    }

    void putData()
    {
        System.out.println("Title: "+title+"\nPrice:"+price);
    }
}

class Book extends Publication{
    int page;

    Book()
    {
    }

    Book(String title,Double price,int page)
    {
        super(title,price);
        this.page=page;
    }

    void getData()
    {
       super.getData();
       Scanner sc = new Scanner(System.in);
       page=sc.nextInt();
    }

    void putData()
    {
        super.putData();
        System.out.println("Pages"+page);
    }  
}

class Audio extends Publication{
    int pt;

    Audio()
    {
    }
    Audio(String title,Double price,int pt)
    {
        super(title,price);
        this.pt=pt;
    }

    void getData()
    {
       super.getData();
       Scanner sc = new Scanner(System.in);
       pt=sc.nextInt();
    }

    void putData()
    {
        super.putData();
        System.out.println("Playtime: "+pt);
    }  
}

class Expt5{
    public static void main(String[] args)
    {
        Book b1 = new Book("Coding in java",20.0,100);
        Book b2 = new Book();
        System.out.println("Enter the name of book,price,no. of pages");
        b2.getData();
        b1.putData();
        b2.putData();

        Audio a1 = new Audio("Mozart",3.0,150);
        Audio a2 = new Audio();
        System.out.println("Enter the name of Audio,price,playtime");
        a2.getData();
        a1.putData();
        a2.putData();
    }
}





